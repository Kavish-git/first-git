#include<stdio.h>
#include<string.h>
int main(){
    struct Person{
        char name[20];
        float salary;
        int age;
    };
    struct Person aman;
        strcpy(aman.name,"aman");
        aman.salary = 80.2;
        aman.age = 24;
     struct Person karan;
        strcpy(karan.name,"karan");
        karan.salary = 70.2;
        karan.age = 32;
    printf("%s\n",karan.name);
    printf("%d\n",aman.age);
}
//in structure elements are stored in a continuous memory locations
