#include <stdio.h>
int main(){
float area,circum,radius;
printf("enter the radius od circle");
scanf("%f",&radius);
area=3.14*radius*radius;
circum=2*3.14*radius;
printf("area of circle : %f\n",area);
printf("circumference of circle: %f ",circum);
return 0;
}
