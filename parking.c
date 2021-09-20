#include<stdio.h>

int main(void)
{
    int n = 0;
    scanf("%i", &n);
    char yest[n];
    char today[n];
    int total = 0;
    scanf("%s", yest);
    scanf("%s", today);
    for(int i = 0; i < n; i++)
    {
        if((yest[i] == today[i]) && today[i]== 'C')
        {
            total++;
        }
    }
    printf("%i\n", total);
}