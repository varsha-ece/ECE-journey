#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
float div(float a, float b) {
    return a / b;
}
void line(){
    printf("---------------------------------\n");
}
int main() {
    int a, b;
    
    printf("Enter a and b values: ");
    scanf("%d %d", &a, &b);
    line();
    printf("Addition: %d\n", add(a,b));
    line();
    printf("Subtraction: %d\n", sub(a,b));
    line();
    printf("Multiplication: %d\n", mul(a,b));
    line();
    printf("Division: %f\n", div(a,b));
    line();
    
    return 0;
}