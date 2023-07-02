#include<stdio.h>

struct Box{
    double length;
    double breadth;
    double height;
};

double volume(double l, double b, double h){
    double v = l * b * h;
    return v;
}

double TotalSurfaceArea(double l, double b, double h){
    double sa = 2 * (l * b + b * h + h * l);
    return sa;
}

int main(){
    struct Box b1;
    struct Box *b2;
    scanf("%lf %lf %lf", &b1.length, &b1.breadth, &b1.height);
    scanf("%lf %lf %lf", &b2->length, &b2->breadth, &b2->height);

    double vol1 = volume(b1.length, b1.breadth, b1.height);
    double surface_area1 = TotalSurfaceArea(b1.length, b1.breadth, b1.height);

    double vol2 = volume(b2->length, b2->breadth, b2->height);
    double surface_area2 = TotalSurfaceArea(b2->length, b2->breadth, b2->height);

    printf("volume of box1 : %lf\n", vol1);
    printf("Total Surface Area of box1 : %lf\n", surface_area1);

    printf("volume of box2 : %lf\n", vol2);
    printf("Total Surface Area of box2 : %lf\n", surface_area2);

    return 0;
}