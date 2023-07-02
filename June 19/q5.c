#include<stdio.h>
#include<string.h>

struct Person
{
    char name[20];
    int age;
    float height;
    int salary;
};

void swap(struct Person *p1, struct Person *p2){
    char tempname[20];
    strcpy(tempname, p1->name);
    strcpy(p1->name, p2->name);
    strcpy(p2->name, tempname);

    int tempage = p1->age;
    p1->age = p2->age;
    p2->age = tempage;

    float tempheight = p1->height;
    p1->height = p2->height;
    p2->height = tempheight;

    int tempsal = p1->salary;
    p1->salary = p2->salary;
    p2->salary = tempsal;
}

int main(){
    struct Person p1, p2;
    printf("Enter details of 1st person\n");
    printf("enter person 1 name: ");
    scanf("%s",p1.name);
    printf("enter person 1 age: ");
    scanf("%d", &p1.age);
    printf("enter person 1 height: ");
    scanf("%f", &p1.height);
    printf("enter person 1 salary: ");
    scanf("%d", &p1.salary);
    

    printf("enter person 2 details\n ");
    printf("enter person 2 name: ");
    scanf("%s", p2.name);
    printf("enter person 2 age: ");
    scanf("%d", &p2.age);
    printf("enter person 2 height: ");
    scanf("%f", &p2.height);
    printf("enter person 2 salary: ");
    scanf("%d", &p2.salary);

    

    printf("details before swapping: ");
    printf("name: %s\nage: %d\nheight: %f\nsalary: %d\n", p1.name,p1.age,p1.height,p1.salary);
    printf("name: %s\nage: %d\nheight: %f\nsalary: %d\n", p2.name,p2.age,p2.height,p2.salary);
    swap(&p1, &p2);

    printf("\nDetails after swapping:\n");
    printf("Person 1:\nName: %s\nAge: %d\nHeight: %.2f\nSalary: %d\n", p1.name, p1.age, p1.height, p1.salary);
    printf("\nPerson 2:\nName: %s\nAge: %d\nHeight: %.2f\nSalary: %d\n", p2.name, p2.age, p2.height, p2.salary);

    return 0;
}/*
#include<stdio.h>
#include<string.h>

struct Person
{
    char name[20];
    int age;
    float height;
    int salary;
};

void swap(struct Person *p1, struct Person *p2){
    char tempname[20];
    strcpy(tempname, p1->name);
    strcpy(p1->name, p2->name);
    strcpy(p2->name, tempname);

    int tempage = p1->age;
    p1->age = p2->age;
    p2->age = tempage;

    float tempheight = p1->height;
    p1->height = p2->height;
    p2->height = tempheight;

    int tempsal = p1->salary;
    p1->salary = p2->salary;
    p2->salary = tempsal;
}

int main(){
    struct Person p1, p2;
    printf("Enter details of 1st person\n");
    printf("enter person 1 name: ");
    scanf("%s", p1.name);
    printf("enter person 1 age: ");
    scanf("%d", &p1.age);
    printf("enter person 1 height: ");
    scanf("%f", &p1.height);
    printf("enter person 1 salary: ");
    scanf("%d", &p1.salary);

    printf("enter person 2 details\n");
    printf("enter person 2 name: ");
    scanf("%s", p2.name);
    printf("enter person 2 age: ");
    scanf("%d", &p2.age);
    printf("enter person 2 height: ");
    scanf("%f", &p2.height);
    printf("enter person 2 salary: ");
    scanf("%d", &p2.salary);

    printf("details before swapping:\n");
    printf("name: %s\nage: %d\nheight: %.2f\nsalary: %d\n", p1.name, p1.age, p1.height, p1.salary);
    printf("name: %s\nage: %d\nheight: %.2f\nsalary: %d\n", p2.name, p2.age, p2.height, p2.salary);

    swap(&p1, &p2);

    printf("\nDetails after swapping:\n");
    printf("Person 1:\nName: %s\nAge: %d\nHeight: %.2f\nSalary: %d\n", p1.name, p1.age, p1.height, p1.salary);
    printf("\nPerson 2:\nName: %s\nAge: %d\nHeight: %.2f\nSalary: %d\n", p2.name, p2.age, p2.height, p2.salary);

    return 0;
}*/
