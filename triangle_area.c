#include <stdio.h>
#include <math.h>

/**
 * @brief Обчислює площу трикутника за координатами його вершин.
 *
 * Ця функція реалізує формулу Гаусса для визначення площі S 
 * на основі декартових координат трьох вершин. Результат обчислення
 * завжди є додатним (абсолютним значенням).
 *
 * @param x_1 Координата X першої вершини (A).
 * @param y_1 Координата Y першої вершини (A).
 * @param x_2 Координата X другої вершини (B).
 * @param y_2 Координата Y другої вершини (B).
 * @param x_3 Координата X третьої вершини (C).
 * @param y_3 Координата Y третьої вершини (C).
 * @return Повертає площу трикутника типу double.
 */
double calculate_triangle_area(
    double x_1, double y_1,
    double x_2, double y_2,
    double x_3, double y_3
) {
    // Формула: S = 1/2 * |x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)|
    double abs_value = fabs(x_1 * (y_2 - y_3) + x_2 * (y_3 - y_1) + x_3 * (y_1 - y_2));
    return 0.5 * abs_value; 
}

int main() {
    // Вхідні дані
    int x_1 = -2;
    int y_1 = 5;
    int x_2 = 1;
    int y_2 = 7;
    int x_3 = 5;
    int y_3 = -3;

    printf("Вхідні дані:\n");
    printf("Координати вершин трикутника:\n");
    printf("A(%d, %d), B(%d, %d), C(%d, %d)\n\n", x_1, y_1, x_2, y_2, x_3, y_3);

    // Виклик функції обчислення
    double area = calculate_triangle_area(x_1, y_1, x_2, y_2, x_3, y_3);

    // Вихідні дані
    printf("Вихідні дані:\n");
    printf("Площа трикутника: %.2f\n", area);

    return 0; 
}
