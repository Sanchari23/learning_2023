#include<stdio.h>

struct Complex{
    double rno;
    double ino;
};

struct Complex addition(struct Complex c1, struct Complex c2)
{
    struct Complex result;
    result.rno = c1.rno + c2.rno;
    result.ino = c1.ino + c2.ino;
    return result;
}

struct Complex multiplication(struct Complex c1, struct Complex c2){
    struct Complex result;
    result.rno = c1.rno * c2.rno - c1.ino * c2.ino;
    result.ino = c1.rno * c2.ino + c1.ino * c2.rno;
    return result;
}

int main(){
    struct Complex c1, c2,sum , product;
    printf("enter the real and imaginary numbers of the first complex no :");
    scanf("%lf %lf", &c1.rno, &c1.ino);
    printf("enter the real and imaginary numbers of the second complex no :");
    scanf("%lf %lf", &c2.rno, &c2.ino);
    sum = addition(c1, c2);
    product = multiplication(c1, c2);
    printf("addition of complex numbers is : %.1f + %.1fi\n", sum.rno, sum.ino);
    printf("product of two complex numbers is : %.1f + %.1fi\n", product.rno, product.ino);

    return 0;
}