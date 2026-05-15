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
void Exit(){
    printf("EXIT \n");
}
int main(){
    int n;
    int a,b;
    printf("enter any no. between 1 to 5 to choose operation");
    scanf("%d",&n);
    printf("enter a and b values : \n");
    scanf("%d %d",&a,&b);
    switch(n){
        case 1 :
        printf("Addition of a and b : %d \n",add(a,b));
        break;
        case 2 :
        printf("Subtraction of a and b : %d \n",sub(a,b));
        break;
        case 3:
        printf("Multiplication of a and b : %d \n",mul(a,b));
        break;
        case 4 :
        printf("Division of a and b : %f \n",div(a,b));
        break;
        case 5 :
        Exit();
        break;
    }
}