#include <stdio.h>
#include<math.h>


int sumofdigits(int n);
int power(int a,int b);
void hotacold(int n);


int main(){
    int n,count;
    printf("Enter the option : \n 1.Sum of digits of a no. \n 2.Squareroot of a no. \n 3.Power of a no. \n 4.Hot and Cold \n ");
    scanf("%d",&count);
    switch (count)
    {
    case  1 :
        printf("Enter The No. : ");
        scanf("%d",&n);
        sumofdigits(n);
        break;
    case  2:
        printf("Enter The No. : ");
        scanf("%d",&n);
        double out = sqrt(n);
        printf("Square-root of %d is : %f \n",n,out);

        break;
    case  3:
        int a,b;
        printf("Enter The No. : ");
        scanf("%d",&a);
        printf("Enter the power : ");
        scanf("%d",&b);
        power(a,b);
        

        break;
    case  4:
        printf("Enter The temp. in celcies : ");
        scanf("%d",&n);
        hotacold(n);

        break;
    
    default:
        printf("Enter the valid no.\n");
        break;
    }
}

int sumofdigits(int n){
    int a,sum=0;
    int n1=n;
    do
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
        
    } while (n>0);
    printf("sum of digits of %d is : %d \n",n1,sum);

    return 0;
}


int power(int a, int b){
    double power=1;
    for (int  i = b; i > 0; i--)
    {
        power = power * b;
    }
    printf("%d to the power %d is : %f \n",a,b,power);
    return 0;
}

void hotacold(int n){
    if (n>=10)
    {
        printf("The weather is hot \n");

    }
    else
    {
        printf("The weather is cold \n");
    }
    
}