#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rand_mas(int a[], int n)
{
    srand(time(0));
    printf("Масив a:\n");
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 201 - 100;
        printf("%d \t", a[i]);
    }
    printf("\n");
}

int seven(int a[], int n)
{
    printf("\nЕлементи менше за сім: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 7)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

int f_n(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            return i;
        }
    }
    return -1;
}

int l_n(int a[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > 0)
        {
            return i;
        }
    }
    return -1;
}

int suma(int a[], int first, int last)
{
    int sum = 0;
    if (first == -1 || last == -1 || first == last)
    {
        return sum;
    }

    for (int i = first + 1; i < last; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int n, h;
    printf("Введіть розмір одновимірного масиву: ");
    scanf("%d", &n);
    int a[n];

    rand_mas(a, n);

    do
    {
        printf("\n1. Завдання №1\n");
        printf("2. Завдання №2\n");
        printf("0. Вихід з програми\n");
        scanf("%d", &h);

        switch (h)
        {
        case 1:
            seven(a, n);
            break;
        case 2:
        {
            int f_p = f_n(a, n);
            int l_p = l_n(a, n);
            if (f_p == -1 || l_p == -1)
            {
                printf("В масиві немає додатніх чисел\n");
            }
            else if (f_p == l_p)
            {
                printf("В масиві є лише один додатній елемент\n");
            }
            else
            {
                int sum = suma(a, f_p, l_p);
                printf("Сума елементів масиву, розташованих між першим і останнім додатніми елементами: %d\n", sum);
            }
            break;
        }
        case 0:
            printf("Вихід з програми\n");
            break;
        default:
            printf("Неправильна цифра\n");
            break;
        }
    } while (h != 0);

    return 0;
}
