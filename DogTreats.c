#include<stdio.h>

int main(){
    int S, M, L, Happ=0;
    scanf("%d", &S);
    scanf("%d", &M);
    scanf("%d", &L);
    Happ=(S*1) + (M*2)+ (L*3);
    if(Happ>=10){
        printf("happy");
    }
    else{
        printf("sad");
    }
}
