//print all the no.s 1 to 10 except 6
//using continue statment
#include <stdio.h>

int main(){
    for(int i=1;i<=10;i++)
    {
       
        if (i==6)
        {
            continue;
        }
        printf("%d \n",i); 
    }
    return 0;
}