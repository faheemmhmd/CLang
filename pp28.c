// fn to reverse an array
#include <stdio.h>

void reverse(int arr[],int n);

int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};

    printf("array items \n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d \t",arr[i]);
    }
    //reverse fn 
    reverse(arr,9);
    printf("\n reverse array : \n");
    for (int i = 0; i < 9; i++)
    {
        printf(" %d \t",arr[i]);
    }
    printf("\n");
    return 0;
}



void reverse(int arr[],int n){
    
    for (int i = 0; i < n/2; i++)
    {
        // int firstvalue=arr[i];
        // int ndvalue=arr[n-i-1];

        // arr[i]=ndvalue;
        // arr[n-i-1]=firstvalue;
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    

}