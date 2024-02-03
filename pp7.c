// now we will use char type
#include <stdio.h>

 int main(){
    char day; // m-monday,T for tuesday, w for wednesday, t for thrusday, s for saturday, S for sunday 
    printf("Enter the day : ");
    scanf("%s",&day);
    switch (day)
    {
    case 'm' :
        printf("Monday \n");
        break;
    case 'T' :
        printf("Tuesday \n");
        break;
    case 'w' :
        printf("Wednesday \n");
        break;
    case 't' :
        printf("Thrusday \n");
        break;
    case 'f' :
        printf("Friday \n");
        break;
    case 's' :
        printf("Saturday \n");
        break;
    case 'S' :
        printf("Sunday \n");
        break;
    
    default:
    printf("Enter among (m,T,w,t,f,s,S) \n");
    }
    return 0;
 }