#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function Declarations

void anja()
{
    printf("A N J A");
}

// task 1: make a function that returns 1 if the input is even and -1 if its odd

int wa()
{
    int intyput;

    printf("Input an integer: ");
    scanf("%d",&intyput);

    if(intyput % 2 == 0)
        return 1;
    else 
        return -1;
}


int main() {
    int intyger = 5;
    int poopy = 69;
    float floaty;

  // Printing

  // printf - this prints statements
  // %d - int
  // %f - float
  // %c - char
  // %lf - double
  // %s - string

    printf("I assigned %d to a variable.\n", intyger);
    printf("I assigned %d and %d to a variable.\n", intyger, poopy);

  // Scanning (scanf)
  // taking in a user input!!
  // if the variable u are assigning the input to
  // is not a pointer, u have to use the ampersand
  // (&) to directly access its memory address
  // and change its value
    printf("Enter a float: ");
    scanf("%f", &floaty);

  // If-Else Statements
  // if
  // else if
  // else

    if(floaty < 10)
    printf("The inputted float is less than 10!\n");
    if(floaty <= 10)
    printf("The inputted float is less than or equal to 10!");

  
    int pooks = wa();
    if(pooks == 1)
    printf("yay its even");
    else if(pooks == -1)
    printf("ew its odd");
  
  // Functions
  // return types:
  // int - returns an integer
  // void - does not return anything
  // char - returns a character
  // float - returns a float
  // double - returns a double
  
  
  
    return 0;
}
