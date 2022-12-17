// IT IS A LEAP YEAR PROGRAM 
#include<stdio.h>
int main()
{
    int yr;
    printf("enter the year");
    scanf("%d",&yr);

    if (yr%4==0)
    {
        printf("it is a leap year ");
    }
    else
    {
        printf("it is not a leap year");
    }
    return(0);
}