#include <stdio.h>

int main(){
   int arr[]={12,13,14,15,16};
   int *ptr=arr;
   printf("%d \n",*ptr++);
   printf("%d \n", *ptr++);
printf("%d \n", ++*ptr);
printf("%d \n", *(++ptr));
printf("%d \n", *(ptr-1));
ptr=&ptr[4];
printf("%u \n",ptr);
   printf("%d \n", *(ptr-1));
   return 0;
}