#include <stdio.h>

int addition(int x, int y);

int main(){
    int x;
    printf("x: ");
    scanf("%d",&x);

    int y;
    printf("y: ");
    scanf("%d",&y);

// Passing x and y as arguments 
    int z = addition(x,y);
    printf("%d\n", z);
}

int addition(int x, int y){
    return x + y;

}