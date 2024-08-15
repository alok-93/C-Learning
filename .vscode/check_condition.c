#include<stdio.h>
int main(){
int a,b,c;

    printf("Enter value  of a: ");
    scanf("%d",&a);

    printf("Enter value of b: ");
    scanf("%d",&b);

    printf("Enter value of c: ");
    scanf("%d",&c);

    if(a>b)
    {
        printf("a is largest  %d",a);
    }
    else  if(b>c)
    {
        printf("b is largest %d",b);
    }
    else if(a>c)
    {
        printf ("a is largest %d",a);
    }
    else
    {
        printf("c is largest %d",c);
    }

    return 0;

}