#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int ex;
    printf("виберіть завдання (1, 2 або 3):\n");
    scanf_s("%d", &ex);

    switch (ex) {
    case 1: {
        double radius;
        double area;

        printf("Введіть радіус (10, 20, 40 або 80): ");
        scanf_s("%lf", &radius);

        switch ((int)radius) {
        case 10:
            area = 3.14159265359 * 10 * 10;
            break;
        case 20:
            area = 3.14159265359 * 20 * 20;
            break;
        case 40:
            area = 3.14159265359 * 40 * 40;
            break;
        case 80:
            area = 3.14159265359 * 80 * 80;
            break;
        default:
            printf("Невірне значення радіуса\n");
            return 1;
        }

        printf("Площа круга з радіусом %lf дорівнює %lf\n", radius, area);

        break;
    }
    case 2: {
        int choice;
        printf("Виберіть вид функції f(x):\n");
        printf("1 - sin(x)\n");
        printf("2 - x^2\n");
        printf("3 - e^x\n");
        scanf_s("%d", &choice);

        double x, y, a;
        printf("Введіть значення x: ");
        scanf_s("%lf", &x);
        printf("Введіть значення y: ");
        scanf_s("%lf", &y);

        switch (choice) {
        case 1:
            if (1 < x && x < 10) {
                a = exp(sin(x));
            }
            else {
                a = pow(fabs(sin(x) + 4 * y), 1.0 / 3.0);
            }
            break;
        case 2:
            if (12 < x && x < 40) {
                a = x * x;
            }
            else {
                a = y * pow(sin(x), 2);
            }
            break;
        case 3:
            if (1 < x && x < 10) {
                a = exp(x);
            }
            else {
                a = y * pow(sin(x), 2);
            }
            break;
        default:
            printf("Невірний вибір функції f(x)\n");
            return 1;
        }

        printf("Результат обчислення: a = %lf\n", a);

        break;
    }
    case 3: {
        int x, y;
        printf("введіть номер карти від 6 до 14\n");
        scanf_s("%d", &y);
        printf("введіть масть де 1 - це піка, 2 - хреста, 3 - чірва, 4 - бубна\n");
        scanf_s("%d", &x);
        switch (x) {
        case 1: printf("піка "); break;
        case 2: printf("хреста "); break;
        case 3: printf("чірва "); break;
        case 4: printf("бубна "); break;
        default: printf("такої масті немає, але карту ви вибрали: "); break;
        }
        switch (y) {
        case 6: printf("шістка "); break;
        case 7: printf("сімка "); break;
        case 8: printf("вісімка "); break;
        case 9: printf("дев'ятка "); break;
        case 10: printf("десятка "); break;
        case 11: printf("валет "); break;
        case 12: printf("дама "); break;
        case 13: printf("король "); break;
        case 14: printf("туз "); break;
        default: printf("невірний номер карти"); break;
        }
        printf("\n");
        break;
    }
    default:
        printf("Невірний вибір завдання\n");
        return 1;
    }

    return 0;
}