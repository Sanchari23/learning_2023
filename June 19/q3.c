#include<stdio.h>

struct Time{
    int hour;
    int minute;
    int second;
};

struct Time TimeDifference( struct Time t1, struct Time t2 ){
    struct Time diff;
    int diffsec = 0;
    int t1sec = t1.hour * 3600 + t1.minute * 60 + t1.second;
    int t2sec = t2.hour * 3600 + t2.minute * 60 + t2.second;
    if(t1sec>t2sec){
        diffsec = t1sec - t2sec;
    }
    else{
        diffsec = t2sec - t1sec;
    }
    diff.hour = diffsec / 3600;
    diffsec = diffsec % 3600;
    diff.minute = diffsec / 60;
    diff.second = diffsec % 60;

    return diff;
}

int main(){
    struct Time t1, t2, diff;
    printf("Enter the starting time (hh:mm:ss) ");
    scanf("%d:%d:%d",&t1.hour,&t1.minute,&t1.second);
    printf("Enter the ending time (hh:mm:ss) ");
    scanf("%d:%d:%d",&t2.hour,&t2.minute,&t2.second);
    diff = TimeDifference(t1,t2);
    printf("diffrence is %d:%d:%d \n",diff.hour,diff.minute,diff.second);

    return 0;
}