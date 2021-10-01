// this is the program of the hackerrank.com which will print the pattern below
#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    printf("Enter the number which you want to print below \n");
    scanf("%d", &a);
    printf("The pattern is printed below \n");
    // now writing the algorithm to print the pattern of the given number as mentioned in hackerank.com
    int len;
    len = (a * 2) - 1;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            int min;
            min = i < j ? i : j;
            min = min < len - i ? min : len - i - 1;
            min = min < len - j - 1 ? min : len - j - 1;
            printf(" %d ", a - min);
        }
        printf("\n");
    }
    getch();
    return 0;
}