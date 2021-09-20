#include<stdio.h>
int main(){
float weight;
float height;
float bmi;

scanf("%f", &weight);
scanf("%f", &height);

bmi = weight/(height*height);

if(bmi>25){
    printf("Overweight");
}
else if (bmi<18.5){
    printf("Underweight");
}
else{
    printf("Normal weight");
}
}