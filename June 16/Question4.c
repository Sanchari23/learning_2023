#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void leftrotate(char str[],int length,int rot){
    rot=rot%length;
    char sub[length];
    for(int i=0;i<length;i++){
        int temp = (i+rot)%length;
        sub[i]=str[temp];
    }
    sub[length]='\0';
    printf("\nLeft Rotated string :%s",sub);
}

void rightrotate(char str[],int length,int rot){
    rot=rot%length;
    char sub[length];
    for(int i=0;i<length;i++){
        int temp = (i+length-rot)%length;
        sub[i]=str[temp];
    }
    sub[length]='\0';
    printf("\nright Rotated string :%s",sub);
}

int main(){
    int length;
    printf("Enter the length of string :");
    scanf("%d",&length);

    char str[length];
    printf("\nEnter the string :");
    scanf("%s",str);

    int rot;
    printf("Enter the number of rotation :");
    scanf("%d",&rot);

    char direction[5];
    printf("Enter (left) to rotate left || (right) to rotate right :");
    scanf("%s",direction);
    
    printf("\nEntered String :%s",str);

    if(strcmp(direction,"left")==0){
        leftrotate(str,length,rot);
    }
    else{
        rightrotate(str,length,rot);
    }
}