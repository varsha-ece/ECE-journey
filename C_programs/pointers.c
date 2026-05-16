#include<stdio.h>
int main(){
    int a=10;
    int *p=&a;
    printf("value of a : %d \n",a);
    printf("address of a : %p \n",&a);
    printf("value of p : %p \n",p);
    printf("value at address p: %d \n",*p);
    *p=50;
    printf("\n after changing via pointer \n");
    printf("value of a : %d \n",a);
    return 0;
    

}