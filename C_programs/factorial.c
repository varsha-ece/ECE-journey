#include <stdio.h>
long long fact(int n){
    int i=1;
    long long res=1;
    while(i<=n)
    {
     res=res*i;
     i++;
    }
    return res;
}
int main(){
    int a;
    printf("enter any number : \n");
    scanf("%d",&a);
    printf("factorial of %d = %lld \n",a,fact(a));
}