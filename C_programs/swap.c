#include <stdio.h>
int main(){
int a,b,temp;
printf("enter a  val");
scanf("%d",&a);
printf("enter b val");
scanf("%d",&b);

temp=a;
a=b;
b=temp;
printf( " a and b after swap :\n ");
printf("a=%d\n",a);
printf("b=%d",b);
return 0;
}
