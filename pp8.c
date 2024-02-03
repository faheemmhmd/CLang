//using switches and if else to calculate marks based grace and percentage
#include <stdio.h>

int main(){
    int total_marks,sub1,sub2,sub3,sub4,sub5,option;
    float percentage;
     printf("Welcome to my calculator: \n Choose the option : \n");
    do
    {
    printf("1 : For percentage(%) \n");
    printf("2 : For Subject wise grades \n");
    printf("3 : For Grades \n");
    printf("5 : Exit \n");
    scanf("%d",&option);
    if (option == 5)
    {
        break;
    }
    
    switch (option)
    {
    case 1 :
        printf("Enter total marks obtained out of 500 : ");
        scanf("%d",&total_marks);
        percentage = total_marks/5.0 ;
        printf("Percentage obtained is : %f \n",percentage);
        break;
    case 3 :
        printf("Enter the percentage obtained : ");
        scanf("%f",&percentage);
        if (percentage <=30.0)
        {
            printf("Your grade is : C \n");
        }else if (percentage>30.0 && percentage<=70.0)
        {
            printf("Your grade is : B \n");
        }
        else if (percentage>70.0 && percentage<=90.0)
        {
            printf("Your grade is : A \n");
        }
        else if (percentage>90.0 && percentage<=100)
        {
            printf("Your grade is : A+ \n");
        }else
        {
            printf("Enter the value from 0 to 100 \n");
        }
        break;
    case 2 :
            printf("Enter the marks of : \n English \n Physics \n Chemistry \n Maths \n Biology \n");
            scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
                if (sub1 <=30.0)
        {
            printf("English: C \n");
        }else if (sub1>30.0 && sub1<=70.0)
        {
            printf("English: B \n");
        }
        else if (sub1>70.0 && sub1<=90.0)
        {
            printf("English: A \n");
        }
        else if (sub1>90.0 && sub1<=100)
        {
            printf("English: A+ \n");
        }else
        {
            printf("Enter the value from 0 to 100 \n");
        }

        if (sub2 <=30.0)
        {
            printf("Physics : C \n");
        }else if (sub2>30.0 && sub2<=70.0)
        {
            printf("Physics : B \n");
        }
        else if (sub2>70.0 && sub2<=90.0)
        {
            printf("Physics : A \n");
        }
        else if (sub2>90.0 && sub2<=100)
        {
            printf("Physics : A+ \n");
        }else
        {
            printf("Enter the value from 0 to 100 \n");
        }

        if (sub3 <=30.0)
        {
            printf("Chemistry : C \n");
        }else if (sub3>30.0 && sub3<=70.0)
        {
            printf("Chemistry : B \n");
        }
        else if (sub3>70.0 && sub3<=90.0)
        {
            printf("Chemistry : A \n");
        }
        else if (sub3>90.0 && sub3<=100)
        {
            printf("Chemistry : A+ \n");
        }else
        {
            printf("Enter the value from 0 to 100 \n");
        }

        if (sub4 <=30.0)
        {
            printf("Maths : C \n");
        }else if (sub4>30.0 && sub4<=70.0)
        {
            printf("Maths : B \n");
        }
        else if (sub4>70.0 && sub4<=90.0)
        {
            printf("Maths : A \n");
        }
        else if (sub4>90.0 && sub4<=100)
        {
            printf("Maths : A+ \n");
        }else
        {
            printf("Enter the value from 0 to 100 \n");
        }

        if (sub5 <=30.0)
        {
            printf("Biology : C \n");
        }else if (sub5>30.0 && sub5<=70.0)
        {
            printf("Biology : B \n");
        }
        else if (sub5>70.0 && sub5<=90.0)
        {
            printf("Biology : A \n");
        }
        else if (sub5>90.0 && sub5<=100)
        {
            printf("Biology : A+ \n");
        }else
        {
            printf("Enter the value from 0 to 100 \n");
        }

            break;
    default: printf("Enter the right option. \n");
    }

    } while (1);
    return 0;
}