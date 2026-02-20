#include <cs50.h>
#include <stdio.h>

int add(int a, int b);

int main(void)
{

int a = get_int("enter first number:");
int b = get_int("enter second number:");

int result = add(a, b);
printf("sum = %d\n", result);
 }
 int add(int a, int b)
 {
    return a+b;
 }



