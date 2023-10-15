#include<stdio.h>
#include<string.h>
struct Person
{
    char name[50];
    int age;
    float salary;
};
int main(){
    struct Person p1;
    struct Person p2;
    
    strcpy(p1.name, "SS");
    p1.age = 19;
    p1.salary = 3433.344;

    strcpy(p2.name, "HP");
    p2.age = 19;
    p2.salary = 10000;

    printf("%s\n",p1.name);
    printf("%d\n ",p1.age);
    printf("%f \n",p1.salary);

    printf("%s\n",p2.name);
    printf("%d\n ",p2.age);
    printf("%f \n",p2.salary);
}
