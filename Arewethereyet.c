#include<stdio.h>

int main(){
    int cOneTwo,cTwoThree,cThreeFour,cFourFive = 0;
    scanf("%d %d %d %d",&cOneTwo,&cTwoThree,&cThreeFour,&cFourFive);
    printf("%d %d %d %d %d\n",0 , cOneTwo, cOneTwo + cTwoThree, cOneTwo + cTwoThree + cThreeFour, cOneTwo + cTwoThree + cThreeFour + cFourFive);
    printf("%d %d %d %d %d\n", cOneTwo, 0, cTwoThree, cTwoThree + cThreeFour, cTwoThree + cThreeFour + cFourFive);
    printf("%d %d %d %d %d\n", cOneTwo + cTwoThree, cTwoThree, 0, cThreeFour, cThreeFour + cFourFive);
    printf("%d %d %d %d %d\n", cOneTwo + cTwoThree + cThreeFour, cTwoThree + cThreeFour, cThreeFour, 0, cFourFive);
    printf("%d %d %d %d %d\n", cOneTwo + cTwoThree + cThreeFour + cFourFive, cTwoThree + cThreeFour + cFourFive, cThreeFour + cFourFive, cFourFive, 0);


}