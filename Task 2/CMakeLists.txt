cmake_minimum_required(VERSION 3.10)
project(SimpleCalculator)

# Вказуємо, що проект використовує C++
set(CMAKE_CXX_STANDARD 11)

# Додавання бібліотеки
add_library(calculator STATIC src/calculator.cpp)

# Створення виконуваного файлу
add_executable(calculator_exec src/main.cpp)

# Підключення бібліотеки до виконуваного файлу
target_link_libraries(calculator_exec calculator)

# Вказуємо шлях до заголовкових файлів
target_include_directories(calculator PUBLIC ${CMAKE_SOURCE_DIR}/include)

# Вказуємо генератор збірки Ninja
set(CMAKE_GENERATOR "Ninja")
