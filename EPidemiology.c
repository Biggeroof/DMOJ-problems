#include<stdio.h>

int main(){
    unsigned int R=0;
    unsigned int P=0;
    unsigned int N=0;
    unsigned int days=0;
    unsigned int i=0;
    int total=0;
    scanf("%d",&P);
    scanf("%d",&N);
    scanf("%d",&R);
    do{
        if(total>P){
            if(R==1){
                printf("%d", days-1);
                i=1;
            }
        else{
            printf("%d", days);
            i=1;
        }
        }
        else{
            if(R==1){
              days++;
              total = total+N;
            }
            else{
            N=N*R;
            days++;
            total = total+N;
            }
        }
    }while(i!=1);
}