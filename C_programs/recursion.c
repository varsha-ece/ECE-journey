#include <stdio.h>
long long fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);

    }
}
int main (){
    int a;
    printf("enter any number : \n");
    scanf("%d",&a);
    printf("factorial of %d = %lld\n",a,fact(a));
    return 0;
}