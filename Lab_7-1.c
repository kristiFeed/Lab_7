#include <stdio.h>

int t(int a, int b, int c)
{

    if (a <= 0 || b <= 0 || c <= 0)
        return 0;
    if (a + b <= c || a + c <= b || b + c <= a)
        return 0;
    return 1;
}

int main()
{
    int q, w, e;

    printf("Введіть довжину першої сторони: ");
    scanf("%d", &q);
    printf("Введіть довжину другої сторони: ");
    scanf("%d", &w);
    printf("Введіть довжину третьої сторони: ");
    scanf("%d", &e);

    if (t(q, w, e))
        printf("Так, можна утворити трикутник з цих сторін.\n");
    else
        printf("Ні, неможливо утворити трикутник з цих сторін.\n");

    return 0;
}
