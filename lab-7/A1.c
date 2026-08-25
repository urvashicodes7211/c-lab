// Print day name of week using switch.
#include<stdio.h>
int main(){
    int day;
    printf("Enter day number(1-7):");
    scanf("%d",&day);
    switch(day){
        case 1:printf("Monday");
        break;
        case 2:printf("Tuseday");
        break;
        case 3:printf("Wedneday");
        break;
        case 4:printf("Thursday");
        break;
        case 5:printf("Friday");
        break;
        case 6:printf("Saturday");
        break;
        case 7:printf("Sunday");
        break;
        default:printf("Invalid number");
    }
    return 0;
}