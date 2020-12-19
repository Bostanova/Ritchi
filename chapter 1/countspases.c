/* подсчет пробелов, табуляций и новых строк*/
#include <stdio.h>

int main()
{
    int i;
    int c; 
    
    i = 0;
    while ((c = getchar()) != 113)
        if (c == ' ' || c == '\t' || c == '\n')
            i++;
    printf ("%d\n", i);
    return 0;
}