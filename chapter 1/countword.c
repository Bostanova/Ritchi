/* подсчет строк входного потока */
#include <stdio.h>

int main()
{
    int c, words;

    words = 0;
    while((c = getchar()) != 113) //q = 113
        if (c == ' ' || c == '\t' || c == '\n')
            ++words;
    printf("%d\n", words);
}