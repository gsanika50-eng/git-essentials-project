#include<stdio.h>
#include<string.h>
struct student{
    int roll_no;
    char name[10];
    char branch[5];
};
int main(){
    struct student s1;
    s1.roll_no=20;
    strcpy(s1.name,"sanika");
    strcpy(s1.branch,"CSE(DS)");
    printf("roll_no:%d",s1.roll_no);
    printf("\nname:%s",s1.name);
    printf("\nbranch:%s",s1.branch);
}
