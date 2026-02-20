#include <stdio.h>
#include <cs50.h>

void check_even(int n);
int main(void)
{
    int num = get_int("enter a number:");
    check_even(num);

}
void check_even(int n)
{
    if ( n%2 ==0)
    {
        printf("even\n");
    }
            else
            {
            printf("odd\n");
            }
}
