#include<stdio.h>

int main(){
    int day, eve, wend, A, B=0;
    scanf("%d",&day);
    scanf("%d",&eve);
    scanf("%d",&wend);
    day = day - 100;
    if(day>0){
    A = (day*25) + (eve*15) + (wend*20);
    }
    else{
        A =(eve*15) + (wend*20);
    }
    day = day + 100;
    day = day - 250;
    if (day>0){
    B = (day*45) + (eve*35)+ (wend*25);
    }
    else{
    B =(eve*35)+ (wend*25);
    }
    printf("Plan A costs %.2f\n", A/100.0);
    printf("Plan B costs %.2f\n", B/100.0);
    if(A>B){
        printf("Plan B is cheapest.\n");
    }
    else if(B>A){
        printf("Plan A is cheapest.\n");
    }
    else{
        printf("Plan A and B are the same price.");
    }
    return 0;
}