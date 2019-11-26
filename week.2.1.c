#include <stdio.h>
int main()
{
float x,y;
printf("enter the values of x and y");
scanf("%f%f,&x,&y");
printf("After Post Increrment of 1st value %f\n",x++);
printf("After Pre Increrment of 2st value %f\n",++y);
}