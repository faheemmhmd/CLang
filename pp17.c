#include <stdio.h>

//use of functons 

void areaofsquare(float side);
void areaofrectriangle(int a, int b);
float areaofcircle(float radius);

int main(){
    float side,radius;
    int a,b;
    printf("Enter the side of square :  ");
    scanf("%f",&side);
    areaofsquare(side);
    printf("Enter the radius of circle : ");
    scanf("%f",&radius);
    //float area = areaofcircle(radius);//a new variable is created to save that value 
    printf("%f \n",areaofcircle(radius));//printing out the return value here
    printf("Enter the sides of rectriangle : ");
    scanf("%d%d",&a,&b);
    areaofrectriangle(a,b);
    return 0;
}


void areaofsquare(float side){
    
    float area = side*side;
    printf("The area of square is : %f \n",area);
}

void areaofrectriangle(int a,int b){
    int area = a*b;
    printf("The area is : %d \n", area);
}

float areaofcircle(float radius){
    float area = 3.1412*radius*radius;
    return area;  //return type is float and return value is 'area'
}