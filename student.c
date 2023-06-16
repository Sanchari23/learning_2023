#include <stdio.h>

void data(char n[], int r, float py, float chem, float math, float *total, float *per)
{
    *total = py + chem + math;
    *per = (*total / 300) * 100;

    printf("\n***SUMMARY***\n");
    printf("Name: %s\n", n);
    printf("Roll No: %d\n", r);
    printf("Marks in Physics: %.2f\n", py);
    printf("Marks in Chemistry: %.2f\n", chem);
    printf("Marks in Math: %.2f\n", math);
    printf("Total Marks: %.2f\n", *total);
    printf("Percentage: %.2f\n", *per);
}

int main()
{
    int rollNo;
    char name[50];
    float physicsMarks, mathMarks, chemistryMarks;
    float total, percentage;

    printf("Enter Name: ");
    scanf(" %[^\n]s", name);

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Marks of Physics: ");
    scanf("%f", &physicsMarks);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistryMarks);

    printf("Enter Marks of Math: ");
    scanf("%f", &mathMarks);

    data(name, rollNo, physicsMarks, chemistryMarks, mathMarks, &total, &percentage);

    return 0;
}
