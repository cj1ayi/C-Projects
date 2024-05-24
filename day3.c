// Practicing for loops bc i don't understand 

// 1. List the first 10 natural numbers
// 2. Sum of the first ten natural numbers
#include <stdio.h>

int main()
{
    int sum = 0; 


    for(int i = 1; i <= 10; i++){
    printf("%d\n", i);

    sum = sum+i;

    }

    printf("%d\n",sum);
}

