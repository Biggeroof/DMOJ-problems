#include <stdio.h>

int main()
{
  int toadd=0;
  int hour=0;
  int minute=0;
  printf("Enter a time: \n");
  scanf("%02d:%02d", &hour, &minute);
  printf("Enter a time to add(minutes): \n");
  scanf("%d",&toadd);
  for (int i = 0; i < toadd; i++) {
    if(hour==23 & minute==60){
    hour=00;
    minute=0;}
    if(minute==60){
        hour++;
        minute=0;
    }
    minute++;
  }
    printf("%02d:%02d\n", hour, minute);
}