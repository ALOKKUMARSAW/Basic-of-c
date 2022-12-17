<<<<<<< HEAD
   // Check whether an integer is odd or even

=======
// Check whether an integer is odd or even
>>>>>>> a0466744ff0813c76c866aa88942178a6bf6f715
#include <stdio.h>
int main() 
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if  (number%2 == 0)             // True if the remainder is 0 
    {
        printf("%d is an even integer.",number);
    }
    else {
        printf("%d is an odd integer.",number);
    }

    return 0;
} 