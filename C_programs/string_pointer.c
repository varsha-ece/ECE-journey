#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    printf("enter your name :\n");
    scanf("%s",name);
    printf("Your name : %s\n",name);
    printf("length : %ld\n",strlen(name));
    printf("character by character:\n");
    char *p=name;
    while(*p !='\0'){
        printf("%c",*p);
        p++;
    }
    printf("\n");
    return 0;
}