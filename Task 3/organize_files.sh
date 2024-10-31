#!/bin/bash

# Функція для обробки директорії
function process_directory() {
  local directory="$1"

  # Переходимо в директорію
  cd "$directory"

  # Отримуємо список файлів та піддиректорій
  for item in *; do
    if [[ -d "$item" ]]; then
      echo "$item is a directory"
      process_directory "$item"  # Рекурсивний виклик для піддиректорій
    elif [[ -f "$item" ]]; then
      # Створюємо нову директорію
      mkdir -p "${item}_dir"
      # Переміщуємо файл
      mv "$item" "${item}_dir"
      echo "$item moved to ${item}_dir"
    fi
  done

  # Повертаємося в попередню директорію
  cd ..
}

# Перевірка наявності аргументу (шлях до директорії)
if [[ $# -eq 0 ]]; then
  echo "Usage: $0 <directory>"
  exit 1
fi

# Отримання шляху до директорії з аргументів командного рядка
directory="$1"

# Перевірка існування директорії
if [[ ! -d "$directory" ]]; then
  echo "Directory '$directory' does not exist"
  exit 1
fi

# Виклик функції для обробки директорії
process_directory "$directory"