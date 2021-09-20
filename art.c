#include<stdio.h>
#include<string.h>

int main(){
    int drops=0;
    int x[101];
    int y[101];
    int i=0;
    int smallX=1000000;
    int smallY=1000000;
    int largeX=0;
    int largeY=0;
    scanf("%d", &drops);
    for(i=0;i<drops;i++){
    scanf("%d,%d", &x[i], &y[i]);
    }
    for(i=0;i<drops;i++){
        if(x[i]>largeX){
            largeX=x[i];
            //printf("largex=%d\n",largeX);
        }
        if(x[i]<smallX){
            smallX=x[i];
            //printf("smallx=%d\n",largeX);
        }
    }
    for(i=0;i<drops;i++){
        if(y[i]>largeY){
            largeY=y[i];
            //printf("largey=%d\n",largeY);
        }
        if(y[i]<smallY){
            smallY=y[i];
            //printf("smally=%d\n",smallY);
        }
    }
    printf("%d, %d\n",smallX - 1, smallY - 1);
    printf("%d, %d\n",largeX + 1,largeY + 1);

}