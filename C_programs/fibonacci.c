#include<stdio.h>
int fib(int n){
    if(n==0){
    return 0;}
    if(n==1){
    return 1;}
    return (fib(n-1)+fib(n-2));
}
int main(){
    int a;
    printf("enter any number : \n");
    scanf("%d",&a);
    int i;
    printf("fibonacci series of %d =\n",a);
    for(i=0;i<a;i++){
        printf("%d  ",fib(i));
    }
}