#include<stdio.h>
#include<string.h>

int main(){
    char sequence[1000];
    char shiftcheck[3];
    int i=0;
    int done=0;
    scanf("%s",sequence);
    scanf("%s",&shiftcheck[i]);
    for(i=1;i<=strlen(sequence);i++){
    if(shiftcheck[1]==sequence[i]){
        if(shiftcheck[0]==sequence[i - 1]){
            if(shiftcheck[2]==sequence[i + 1]){
                printf("yes");
                done=1;
            }
        }//ABC,ACB,BAC,BCA,CAB,CBA
    }
    if(shiftcheck[2]==sequence[i]&& done != 1){
        if(shiftcheck[0]==sequence[i - 1]){
            if(shiftcheck[1]==sequence[i + 1]){
                printf("yes");
                done=1;
            }
        }
    }
        if(shiftcheck[0]==sequence[i] && done != 1){
        if(shiftcheck[1]==sequence[i - 1]){
            if(shiftcheck[2]==sequence[i + 1]){
                printf("yes");
                done=1;
            }
        }
    }
        if(shiftcheck[2]==sequence[i] && done != 1){
        if(shiftcheck[1]==sequence[i - 1]){
            if(shiftcheck[0]==sequence[i + 1]){
                printf("yes");
                done=1;
            }
        }
    }
        if(shiftcheck[0]==sequence[i] && done != 1){
        if(shiftcheck[2]==sequence[i - 1]){
            if(shiftcheck[1]==sequence[i + 1]){
                printf("yes");
                done=1;
            }
        }
    }
        if(shiftcheck[1]==sequence[i] && done != 1){
        if(shiftcheck[2]==sequence[i - 1]){
            if(shiftcheck[0]==sequence[i + 1]){
                printf("yes");
                done=1;
            }
        }
    }
    }

    if(done=1){
    }
    else{
        printf("no");
    }

}