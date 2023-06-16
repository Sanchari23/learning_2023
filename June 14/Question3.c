#include<stdio.h>

int main(){
    int num;
    printf("Enter the size of array :");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        printf("Enter the %d , number :",i+1);
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int n=0;
    while(n<=num){
        sum=sum+arr[n];
        n=n+2;
    }
    printf("The sum of alternate elements is :%d",sum);
    return 0;
}