// max no. bw 2 no.
#include <stdio.h>

int maxN(int a, int b,int *n);


int main(){

    int a,b;
    int num=0;

    printf("Enter the no. :  ");
    scanf("%d%d",&a,&b);
    maxN(a,b,&num);
    printf("The max no. between a and b is : %d \n",num);

    return 0;
}

int maxN(int a, int b,int *n){
    
    if (a>b)
    {
        for (int  i = b+1; i < a; i++)
        {
            (*n)=(*n)+1;
        }
    }else{
            for (int  i = a+1; i < b; i++)
            {
                (*n)=(*n)+1;
            }
            
        }
        
    
}