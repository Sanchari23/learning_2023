#include<stdio.h>
#include<stdlib.h>

struct students
{
    char name[20];
    int roll_no;
    float marks;

};
int main(){
    int n,i;
    scanf("%d",&n);
    //struct students* student = calloc(n, sizeof(struct students));
    struct students* student = calloc(n, sizeof(struct students));
    if (student == NULL) {
        printf("Memory allocation failed. Exiting program.\n");
        return 1;
    }
    for(i = 0;i<n;i++){
        printf("Student %d\n",i+1);
        printf("Student name: ");
        //scanf("%s", &student[i].name);
        scanf("%s", student[i].name);

        printf("Student roll no:");
        scanf("%d", &student[i].roll_no);
        printf("Student marks: ");
        scanf("%f", &student[i].marks);
    }
    for(i=0;i<n;i++){
        printf("\nstudent %d\n",i+1 );
        printf("%s\n",student[i].name);
        printf("%d\n",student[i].roll_no);
        printf("%f\n",student[i].marks);

    }

    return 0;
}
