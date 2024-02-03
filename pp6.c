// use of switches`
#include <stdio.h>

int main(){
    int day;
    printf("Enter the day 1 to 7 : ");
    scanf("%d",&day);
    switch (day)
    {
     case 1 : printf("Monday \n"); //these are all switches
        break;
     case 2 : printf("Tuesday \n"); //these are all switches
        break;
     case 3 : printf("Wednesday \n"); //these are all switches
        break;
     case 4 : printf("Thrusday \n"); //these are all switches
        break;
     case 5 : printf("Friday \n"); //these are all switches
        break;
     case 6 : printf("Saturday \n"); //these are all switches
        break;
     case 7 : printf("Sunday \n"); //these are all switches
        break;
    default: printf("Enter the value from (1-7) \n"); //these are all switches
    }
        return 0;
}