#include<stdio.h>
#include<string.h>
struct Date
{
    int day;
    int month;
    int year;
};
struct employee
{
    char name[50];
    struct Date hiredate;
};
int main(){
    struct employee e1;

    strcpy(e1.name, "SS");
    e1.hiredate.day=23;
    e1.hiredate.month=10;
    e1.hiredate.year=2003;

    printf("Name: %s \n",e1.name);
    printf("Hired date : %d/%d/%d",e1.hiredate.day,e1.hiredate.month,e1.hiredate.year);
}

