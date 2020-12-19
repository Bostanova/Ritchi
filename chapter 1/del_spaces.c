/* удаление дублирующихся пробелов*/
#include <stdio.h>

int main()
{
    int c, pred;

    pred = 0;

    while((c = getchar()) != 113)
    {
        if(c == ' ')
        {
            if(pred == 0)       /* был ли ранее пробел */
            {   
                putchar(c);     /* если нет - печатаем */
                pred = 1;       /* и запоминаем */
            }
        }
        if(c != ' ')
        {
            putchar(c);
            pred = 0;
        }
    }   
}