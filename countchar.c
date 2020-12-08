/* подсчет вводимых символов; 1-я версия */
#include <stdio.h>

int main()
{
    long nc; 
    
    nc = 0;
    while (getchar() != 113) //q = 113
        ++nc;
    printf("%ld\n", nc);
}