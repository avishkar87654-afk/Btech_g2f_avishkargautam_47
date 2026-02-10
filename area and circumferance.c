#include<stdio.h>
int main (){
    int pi =3.14;
    int r , a ,c;
    printf("enter the radius \n");
    scanf("%d", &r);
    a = pi*r*r;
    c = 2*pi*r;

    printf("the area is %d", a);
    printf("\n");
    printf("the circumference is %d", c);
}