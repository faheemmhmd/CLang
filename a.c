#include <stdio.h>
//new code
int main()
{
   int arr[100]={10,20,40,5,6,50,78,67,98};
   int largest =arr[0];

   for(int i=1; i<= 10;i++)
   { 
      // printf("%d, ",arr[i]);
   if (arr[i]>arr[0])
   {
      largest=arr[i];
   }
   
   
   }
printf("\n %d is the lagest number in the array \n",largest);
return 0;
}