#include <cs50.h>
#include <stdio.h>

int tempAdvisor(int temp, int fan);

int main(void){

    int temperature = get_int("enter temperature: ");
    int fan = get_int("enter fan status (1 = ON, 0 = OFF): ");

    int code = tempAdvisor(temperature, fan);

    if (code == 1)

    {
        printf("turn ON the fan\n");
    }

    else

     if (code == 2)

    {
        printf("temperature is normal\n");
    }

    else

    if (code == 3)

    {
        printf("turn ON the fan immediately\n");
    }

    else

    if (code == 4)

    {
        printf(" the fan already running\n");
    }

    else
    {
        printf("no action needed\n");
    }
}

int tempAdvisor(int temp, int fan)
{
    if (temp < 20 && fan == 0)
    {
        return 1;
    }
    else if (temp < 20 && fan == 1)
    {
        return 4;
    }
    else if (temp >= 20 && temp <= 30)
    {
        return 2;
    }
    else if (temp > 30 && fan == 0)
    {
        return 3;
    }
    else
    {
        return 0;
    }
}
