#include <stdio.h>
int main(){
    int marks;
    printf("enter marks");
    scanf("%d",&marks);
    if(marks >=90){
        printf("grade:EX\n");
    }
    else if (marks >=75){
        printf("grade:A\n");
    }
    else if (marks >=60){
        printf("grade:b\n");
    }
    else if (marks >= 35){
        printf("grade:C\n");
    }
    else{
        printf("grade: F\n");
    }
    return 0;
}