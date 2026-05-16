#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x,y;
    printf("enter x and y values :\n");
    scanf("%d %d",&x,&y);
    printf("before swap : x=%d  y=%d\n",x,y);
    swap(&x,&y);
    printf("After swap : x=%d  y=%d\n",x,y);
    return 0;
}