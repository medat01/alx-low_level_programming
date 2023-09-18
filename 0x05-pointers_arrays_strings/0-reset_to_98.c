#include <stdio.h>

/**
 * updateValue - Updates the value pointed to by an integer pointer to 98.
 * @ptr: Pointer to an integer.
 *
 * Description: This function takes a pointer to an integer as a parameter
 * and updates the value it points to 98.
 */
void updateValue(int *ptr)
{
    *ptr = 98;
}

int main()
{
    int num = 42;
    printf("Before update: num = %d\n", num);

    // Call the updateValue function with a pointer to num
    updateValue(&num);

    printf("After update: num = %d\n", num);

    return (0);
}

