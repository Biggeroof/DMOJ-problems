#include<stdio.h>

int main(){
    int first,second,third,fourth=0;
    scanf("%d", &first);
    scanf("%d", &second);
    scanf("%d", &third);
    scanf("%d", & fourth);
    if(first==8||first==9){
        if (fourth==8||fourth==9){
            if(second == third){
                printf("ignore");
            }
            else
            {
                printf("answer");
            }
        }
        else{
            printf("answer");
        }
    }
    else
    {
        printf("answer");
    }
}
