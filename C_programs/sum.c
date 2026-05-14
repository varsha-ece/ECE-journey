#include <stdio.h>
int main(){
    int n,i=0,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    while (i<=n){
        sum=sum+i;
        
        i++;

    }
    printf("total sum = %d \n",sum);
    return 0;
}