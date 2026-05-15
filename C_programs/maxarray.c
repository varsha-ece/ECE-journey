#include <stdio.h>
int main(){
    int n,i;
    printf("enter array size : \n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements to array : \n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }

    }
    printf("max = %d\n",max);
    return 0;

}