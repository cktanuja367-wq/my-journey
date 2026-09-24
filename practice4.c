#include <stdio.h>
int main()
{
    float p;
    float t;
    float r;
    printf("enter the value of p\n");
    scanf("%f",&p);
    printf("enter the value of t\n");
    scanf("%f",&t);
    printf("enter the value of r\n");
    scanf("%f",&r);
    float si =(p*t*r)/100;
    printf("the simple intrest is :%f\n", si);
}
