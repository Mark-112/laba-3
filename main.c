#include <stdio.h>
#include <stdlib.h>

int zd2()
{
    int a, b, c, n, x, i;
    printf("vvedite n\n");
    scanf("%d", &n);
    a = 0;
    b = 1;     //начальные данные
    c = 3;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    for (i = 3; i <= n; i++)
    {
        x = a+c;
        printf("%d\n", x);
        a = b;
        b = c;
        c = x;

    }

    return 0;
}


int zd4()
{
    int n, s, x;
    printf("vvedite n\n");
    scanf("%d", &n);
    s = n;
    while (s >= 10)
    {
        s = 0;
        while (n >= 10)
        {
            x = n % 10;
            s += x;
            x = n / 10;
            n = x;
        }
        s += n;
        n = s;
    }

    printf("%d", s);

    return 0;
}


int zd5()
{
    int n, i, st;
    printf("vvedite n\n");
    scanf("%d", &n);
    i = 2;
    while (n > 1)
    {
        st = 0;
        while(n % i == 0)
        {
            n /= i;
            st += 1;
        }
        if (st != 0)
            printf("%d^%d   ", i, st);
        i ++;
    }


    return 0;
}


int zd6()
{
    int n, i, s;
    s = 0;
    printf("vvedite n\n");
    scanf("%d", &n);
    for (i = 2*(n*(n-1)/2 + 1) - 1; i <= 2*(n*(n+1)/2 + 1) - 3; i += 2)
    {
        printf("%d  ", i);
        s += i;
    }
    printf("\n%d", s);

    return 0;
}


int zd7()
{
    int n, x;
    printf("vvedite n\n");
    scanf("%d", &n);
    x = 0;
    while(n > 1)
    {
        x += n % 2;
        n /= 2;
    }
    x += n;
    printf("%d", x);

    return 0;
}

int main()
{

    //zd2();
    //zd4();
    zd5();
    //zd6();
    //zd7();


    return 0;
}
