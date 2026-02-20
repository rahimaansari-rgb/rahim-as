#include <cs50.h>
#include <stdio.h>

void print_array(int arr[], int n);

int main(void)

{
    int n = 5;
    int arr[n];


    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("element %d: ", i + 1);
    }

    print_array(arr, n);
}

void print_array(int arr[], int n)

{
    printf("array elements: ");


    for (int i = 0; i < n; i++)

    {
        printf("%d ", arr[i]);

    }

    printf("\n");
}
