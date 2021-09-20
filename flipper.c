#include<stdio.h>
#include<string.h>

int main(){
    int grid [4]={1,2,3,4};
    int one, two, three, four=0;
    char instruction[1000000];
    int i=0;
    scanf("%s", instruction);
    for(i=0;i<strlen(instruction);i++){
    if (instruction[i]=='H'){
        one=grid[0];
        two=grid[1];
        three=grid[2];
        four=grid[3];
        grid[0]=three;
        grid[1]=four;
        grid[2]=one;
        grid[3]=two;
    }
    if (instruction[i]=='V'){
        one=grid[0];
        two=grid[1];
        three=grid[2];
        four=grid[3];
        grid[0]=two;
        grid[1]=one;
        grid[2]=four;
        grid[3]=three;
    }
    }
printf("%d %d\n",grid[0],grid[1]);
printf("%d %d\n",grid[2],grid[3]);


}