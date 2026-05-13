#include <stdio.h>
int main(){
float weight,height;
printf("enter your weight in kgs");
scanf("%f",&weight);
printf("enter your height in meters");
scanf("%f",&height);
float bmi=weight/(height*height);
printf("your bmi =%f",bmi);
return 0;
}
