//write the table of a number entered by the user
#include <stdio.h>

int main(){
    int number;
    printf("Enter the no : ");
    scanf("%d",&number);
    printf("Table of %d \n",number);
    for (int  i = 0; i <= 10; i++)
    {
            printf("%d * %d = %d \n",number,i,i*number);
    }
    return 0;   
}