#include <stdio.h>
#include <math.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int ex;
    printf("������� �������� (1, 2 ��� 3):\n");
    scanf_s("%d", &ex);

    switch (ex) {
    case 1: {
        double radius;
        double area;

        printf("������ ����� (10, 20, 40 ��� 80): ");
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
            printf("������ �������� ������\n");
            return 1;
        }

        printf("����� ����� � ������� %lf ������� %lf\n", radius, area);

        break;
    }
    case 2: {
        int choice;
        printf("������� ��� ������� f(x):\n");
        printf("1 - sin(x)\n");
        printf("2 - x^2\n");
        printf("3 - e^x\n");
        scanf_s("%d", &choice);

        double x, y, a;
        printf("������ �������� x: ");
        scanf_s("%lf", &x);
        printf("������ �������� y: ");
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
            printf("������� ���� ������� f(x)\n");
            return 1;
        }

        printf("��������� ����������: a = %lf\n", a);

        break;
    }
    case 3: {
        int x, y;
        printf("������ ����� ����� �� 6 �� 14\n");
        scanf_s("%d", &y);
        printf("������ ����� �� 1 - �� ���, 2 - ������, 3 - �����, 4 - �����\n");
        scanf_s("%d", &x);
        switch (x) {
        case 1: printf("��� "); break;
        case 2: printf("������ "); break;
        case 3: printf("����� "); break;
        case 4: printf("����� "); break;
        default: printf("���� ���� ����, ��� ����� �� �������: "); break;
        }
        switch (y) {
        case 6: printf("������ "); break;
        case 7: printf("���� "); break;
        case 8: printf("����� "); break;
        case 9: printf("���'���� "); break;
        case 10: printf("������� "); break;
        case 11: printf("����� "); break;
        case 12: printf("���� "); break;
        case 13: printf("������ "); break;
        case 14: printf("��� "); break;
        default: printf("������� ����� �����"); break;
        }
        printf("\n");
        break;
    }
    default:
        printf("������� ���� ��������\n");
        return 1;
    }

    return 0;
}