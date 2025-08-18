#include<stdio.h>
int main()
{
    float a ;
    float b;
    printf("Enter the Larger Value: ");
    scanf("%f",&a);
     printf("Enter the Smaller Value: ");
    scanf("%f",&b);
    float c = a-b;
    printf("The value is %.2f",c);
}