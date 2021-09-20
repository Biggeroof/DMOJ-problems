#include<stdio.h>

int main(void)
{
        int clock [4] = {1, 2, 0, 0};
        int difference = 0;
        int count = 0;
        int minutes = 0;
        scanf("%i", &minutes);
        if(minutes > 720 )
        {
             while(minutes > 1000)
             {
                 minutes -= 720;
                 count = count + 31;
             }
        }
        for(int i = 0; i <= minutes; i++)
        {
            difference = clock[3] - clock[2];
            if(clock[2] - clock[1] == difference)
            {
                if((clock[1] - clock[0] == difference) && clock[0] != 0)
                {
                    count++;
                }
                else if(clock[0] == 0)
                {
                    count++;
                }
            }
            clock[3]++;
            if(clock[0] == 1 && clock[1] == 2)
            {
                if(clock[2] == 5 && clock[3] == 9)
                {
                    clock[0] = 0;
                    clock[1] = 1;
                    clock[2] = 0;
                    clock[3] = 0;
                    i++;
                }
            }

            if(clock[1] == 10)
            {
                clock[1] = 0;
                clock[0] = 1;
            }
            if(clock[2] == 6)
            {
                clock[2] = 0;
                clock[1]++;
            }
            if(clock[3] == 10)
            {
                clock[3] = 0;
                clock[2]++;
            }
        }
        printf("%d\n", count);
    }
