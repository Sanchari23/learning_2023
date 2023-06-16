#include <stdio.h>

int countBits(unsigned int num) {
    int count = 0;
    while (num) {
        num = num & (num - 1);
        count++;
    }
    return count;
}

int getSetBits(unsigned int arr[], int size) {
    int totalbits = 0;
    int i=0;
    while(i<size){
        totalbits = totalbits + countBits(arr[i]);
        i=i+1;
    }
    return totalbits;
}

int main() {
   
    int size;
    printf("Enter the size of bits array :");
    scanf("%d",&size);
    unsigned int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter element %d : ", i + 1);
        scanf("%x", &arr[i]);
    }

    int Sum = getSetBits(arr, size);
    printf("The total number of set bits given in the array is : %d\n", Sum);

    return 0;
}
