// write a fn to count the odd no.s in an array
#include <stdio.h>

void count(int arr[],int n, int *coun);

int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int coun=0;
    count(arr,9,&coun);
    printf("count : %d \n",coun);

    return 0;
}

void count(int arr[],int n, int *coun){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2 !=0)
        {
            *coun=(*coun )+ 1;
        }
        
    }
    

}