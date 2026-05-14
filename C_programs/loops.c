
#include <stdio.h>
int main(){
    int i;
    printf("-----------for loop counting up--------------\n");
    for(i=1;i<=10;i++){
        printf("%d",i);
    }
    printf("\n-----------while loop counting down------------\n");
    i=10;
    while(i>=1){
        printf("%d",i);
        i--;

    }
    printf("\n");
    return 0;
}