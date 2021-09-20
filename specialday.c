#include <stdio.h>

int main(void)
{
    int day = 0, month = 0;
    scanf("%i", &month);
    scanf("%i", &day);

    if(month < 2 || (month == 2 && day < 18))
    {
        printf("Before\n");
    }
    else if(month > 2 || (month ==2 && day > 18))
    {
        printf("After\n");
    }
    else{
        printf("Special\n");
    }
}