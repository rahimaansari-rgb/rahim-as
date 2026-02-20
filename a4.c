#include <stdio.h>
#include <cs50.h>

int square(int n);
int main(void)
{
    int num = get_int("enter a number:" );
    int result = square(num);
    printf("square = %d\n", result);
}
int square(int n)
{
    return n * n;
}
