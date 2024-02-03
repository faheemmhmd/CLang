//keep taking the input from user until he puts an odd no 
#include<stdio.h>

int main(){
    int number;
    do
    {
        printf(" Enter the even no,  : ");
        scanf("%d",&number);
        if (number % 2 != 0)
        {
            break;
        }
        
    } while (1);
    return 0;
}