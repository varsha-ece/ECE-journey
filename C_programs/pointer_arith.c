#include<stdio.h>
int main(){
    int n,i;
    printf("enter array size : \n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements to array :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int *p=a;
    printf("using pointer to access array :\n");
    for(i=0;i<n;i++){
        printf("a[%d] = %d \n",i,*p);
        p++;
    }
    return 0;
}