/* копирование ввода на вывод; 1-я версия */
// #include <stdio.h>

// int main()
// {
//     int c;

//     c = getchar();
//     while (c != EOF)
//     {
//         putchar(c);
//         c = getchar();
//     }
// }

/* копирование ввода на вывод; 2-я версия */
#include <stdio.h>

int main()
{
    int c;

    while((c = getchar()) != EOF)
        putchar(c);
}