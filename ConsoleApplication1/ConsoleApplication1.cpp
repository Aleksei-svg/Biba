#include <iostream>
#include <cstdlib>    // Для rand и srand
#include <ctime>      // Для time

int main() {
    std::srand(std::time(0)); // Инициализация генератора случайных чисел

    std::string input;
    std::cout << "Биба:\n"
        << "\"Нажми на кнопку — получишь результат!\"\n\n";

    std::cout << "Нажмите Enter, чтобы нажать на кнопку: ";
    std::getline(std::cin, input);

    // Массив возможных "результатов"
    std::string results[] = {
        "РЕЗУЛЬТАТ!"
    };

    int index = std::rand() % (sizeof(results) / sizeof(results[0]));

    std::cout << "\nРезультат: " << results[index] << "\n";

    return 0;
}