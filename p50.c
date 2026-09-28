#include<stdio.h>
struct calculate{
    int a;
    int b;
};
int main(){
    struct calculate c1;
    c1.a=6;
    c1.b=5;
    printf("sum:%d",c1.a+c1.b);
    printf("\nsub:%d",c1.a-c1.b);
    printf("\nmul:%d",c1.a*c1.b);
    printf("\ndiv:%d",c1.a/c1.b);
}