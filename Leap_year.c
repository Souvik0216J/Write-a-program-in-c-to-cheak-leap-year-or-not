#include<stdio.h>
#include<stdlib.h>
int main()
{
    int year = 0;
    system("cls");

    printf("Enter Number: ");
    scanf("%d", &year);

    if(year%4 == 0)
    {
        printf("Leap Year.");
    }
    else
    {
        printf("Not Leap Year.");
    }
    return 0;
}