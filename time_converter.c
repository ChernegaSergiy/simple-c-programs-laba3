#include <stdio.h>

/**
 * @brief Конвертує хвилини в години та хвилини.
 *
 * @param total_minutes Загальна кількість хвилин.
 * @param hours Вказівник для збереження кількості годин.
 * @param minutes Вказівник для збереження залишку хвилин.
 */
void convert_minutes_to_time(int total_minutes, int *hours, int *minutes) {
    *hours = total_minutes / 60; // Цілочисельне ділення дає години
    *minutes = total_minutes % 60; // Оператор модуло (%) дає залишок хвилин
}

int main() {
    // Вхідні дані
    int input_minutes = 150;
    int hours, minutes;

    printf("Вхідні дані:\n");
    printf("Часовий інтервал - %d хвилин.\n\n", input_minutes);

    // Виклик функції конвертації
    convert_minutes_to_time(input_minutes, &hours, &minutes);

    // Вихідні дані
    printf("Вихідні дані:\n");
    printf("%d хвилин - це %d год. %d хв.\n", input_minutes, hours, minutes);

    return 0;
}
