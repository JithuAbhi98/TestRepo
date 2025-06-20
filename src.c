#include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = sum(num1,num2)
    printf("Sum: %d\n", sum);
    return 0;
}

int sum (int a, int b){
    int out;
    int c = 5;
    out = c*(a + b);
    return out;
}