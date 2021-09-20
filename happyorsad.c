#include<stdio.h>
#include<string.h>

int main(void)
{
    char sentence[255];
    char happy[3] = ":-)";
    char sad[3] = ":-(";
    int n1 = 0, n2 = 0;
    fgets(sentence, 255, stdin);
    int len = strlen(sentence);
    for(int i = 0; i < len; i++)
    {
        if((int)sentence[i] == 58 && (int)sentence[i + 1] == 45 && (int)sentence[i + 2] == 41)
        {
            n1++;
        }
        else if((int)sentence[i] == 58 && (int)sentence[i + 1] == 45 && (int)sentence[i + 2] == 40)
        {
            n2++;
        }
    }
    if(n1 > n2)
    {
        printf("happy\n");
    }
    else if(n1 < n2)
    {
        printf("sad\n");
    }
    else if(n1 == n2 && n1 !=0)
    {
        printf("unsure\n");
    }
    else
    {
        printf("none");
    }
}