#include <stdio.h>
#include <locale.h>

void task1();

int main()
{
    setlocale(LC_ALL, "Russian");

    task1();

    return 0;
}

void task1()
{
    int A, B, C, D;
    int condition;

    printf("=== СИГНАЛИЗАЦИЯ В МУЗЕЕ ===\n");
    printf("Введите состояние датчиков A B C D (0 или 1): ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    condition = (A + B + C + D >= 3);

    printf("\nСработало датчиков: %d\n", A + B + C + D);
    printf("Запись включена (1 - да, 0 - нет): %d\n", condition);
}