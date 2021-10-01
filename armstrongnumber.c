/*this program will let you to check whether the number is armstrong or not */
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int number, sum = 0, remainder, temp;

    printf("Enter the number below \n");
    scanf("%d", &number);
    temp = number;
    while (number != 0)
    {
        remainder = number % 10;
        sum = sum + pow(remainder, 3);
        number = number / 10;
    }
    if (temp == sum)
    {
        printf("The number is an armstrong number \n");
    }
    else
    {
        printf("The number is not an armstrong number \n");
    }

    getch();
    return 0;
}