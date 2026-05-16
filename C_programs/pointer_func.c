#include <stdio.h>
void cal(int *arr ,int n,int *sum,float *avg){
    for(int i=0;i<n;i++){
        *sum=*sum+arr[i];
        *avg=(float)*sum/n;
    }

}
int main (){
    int n,sum=0;
    float avg;
    printf("enter array size :\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements to array :\n");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    cal(arr,n,&sum,&avg);
    printf("sum = %d \n",sum);
    printf("average = %.2f",avg);
}