#include<stdio.h>

int main() {
    int age;
    float weight;

    // printf("Hello, world!\n");
    printf("Enter your age and weight\n");

    scanf("%d%f", &age, &weight);

    printf("Age is %d\t Weight is %f\n", age, weight);
    
    printf("Address of age is %p and address of weight is %p\n", &age, &weight);

    return 0;
}