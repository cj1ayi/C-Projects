#include <stdio.h>

int main(){
    int i = 0;
    int n = 0;
    int sum = 0;
    float mean = 0;

    printf("Input the first 10 numbers:\n");


    for(i = 1; i <= 10; i++){
    printf("Number-%d: ",i);
    scanf("%d",&n);

    sum += n;
}
    mean = sum / 10.0;


    printf("Sum of the 10 numbers: %d\n", sum);
    printf("Mean of the 10 numbers: %.2f\n", mean);

    return 0;

}