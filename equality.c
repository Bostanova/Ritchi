/* Проверка выражения getchar() != EOF
   Для получения 0, необходимо нажать Ctrl+D в Linux-e
   или Ctrl+Z в Windows*/

#include <stdio.h>

int main()
{
    int res;

    res = (getchar() != EOF);
    printf("%d\n", res);
}