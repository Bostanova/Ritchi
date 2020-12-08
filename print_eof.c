/* Вывод значения EOF */
#include <stdio.h>

int main()
{
    printf("%d\n", EOF);
    printf("%lu\n", sizeof(EOF)); // sizeof(int)
    return 0;
}