#include<stdio.h>

void main(){
    int ThrP,TwP,OneP,Ban,App=0;
    scanf("%d", &ThrP);
    scanf("%d", &TwP);
    scanf("%d", &OneP);
    App = (ThrP * 3) + (TwP * 2) + (OneP * 1);
    scanf("%d", &ThrP);
    scanf("%d", &TwP);
    scanf("%d", &OneP);
    Ban = (ThrP * 3) + (TwP * 2) + (OneP * 1);
    if (App>Ban){
        printf("A");
    }
    else if (Ban>App){
        printf("B");
    }
    else{
        printf("T");
    }

}