#include <stdio.h>
int main()
{
    float a;
    float b;
    printf("Enter the A value: ");
    scanf("%f", &a);
    printf("Enter the B value: ");
    scanf("%f", &b);
    float c = a*b;
    printf("%.2f",c);
    return 0;
}