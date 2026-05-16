#include<stdio.h>
int findmin(int *arr, int n)
{
    int min =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            return arr[i];
        }
    }
}
int findmax(int *arr, int n)
{
    int max =arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            return arr[i];
        }
    }
}
int main (){
    int n;
    printf("enter array size :\n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements to array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf(" maximum = %d\n",findmax(a,n));
    printf(" minimum = %d\n",findmin(a,n));
}