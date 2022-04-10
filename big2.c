#include <stdio.h>
void biggest2()
{
    int num1, num2;
    // Ask user to enter the two numbers
    printf("Enter Two different values to find largest of it \n");
    // Read two numbers from the user
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        printf("%d is Largest\n", num1);
    }
    else if (num2 > num1)
    {
        printf("%d is Largest\n", num2);
    }
    else
    {
        printf("Both are Equal\n");
    }
    return 0;
}
