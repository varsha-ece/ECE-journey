#include <stdio.h>
int main(){
    int n;
    int i,sum=0;
    float avg;
    printf("enter any number :\n");
    scanf("%d",&n);
    int marks[n];
    printf("enter marks :\n");
    for(i=0;i<n;i++){
        printf("mark %d \n",i+1);
        scanf("%d",&marks[i]);

    }
    for(i=0;i<n;i++){
        sum=sum+marks[i];
    }
    avg=sum/n;
    printf("\n sum of all marks = %d \n",sum);
    printf("\n average of all marks = %.2f \n",avg);

}