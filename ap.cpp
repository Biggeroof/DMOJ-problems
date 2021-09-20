#include <stdio.h>

int n;
int d[10];

bool same(int k)
{
    for (int i=0; i<10; i++) d[i]=0;
    while (k) {
        d[k%10]++;
        k/=10;
    }
    for (int i=0; i<10; i++) if (d[i]>1) return 1;
    return 0;
}

int main()
{
    scanf("%d",&n);
    while (same(++n));
    printf("%d",n);
}