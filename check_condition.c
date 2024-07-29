#include<stdio.h>
int main(){
    int pass = 8969;
    int check;
    do{

    printf("\nEnter password to open secret msg.");
    scanf("%d",&check);
    if(pass == check){
        printf("Welcome to programming world.");
        break;
    }
    else{
        printf("Wrong password try again.");
    }
    }while (1);
    return 0;
}