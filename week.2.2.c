#include<stdio.h>
void main()
{
    int A,B;
    scanf("%d%d",&A,&B);
    printf("the result of bitwise AND is %d\n",A&B);
    printf("the result of bitwise OR is %d",A|B);
    printf("\nthe result of bitwise XOR is %d",A^B);
    printf("\nthe result of bitwise NOT for num1 is %d",~A);
    printf("\nthe result of leftshift of num1 by 1 is %d",A<<1);
    printf("\nthe result of rightshift of num1 by 1 is %d",A>>1);
}