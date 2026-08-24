/* Read marks of five subjects. Calculate percentage and print class accordingly. Fail below 35, Pass Class 
between 36 to 45, Second Class between 46 to 60, First Class between 61 to 70, Distinction if more than 
70. */

#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5,per;

    printf("Enter m1,m2,m3,m4,m5:");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);

    per=((m1+m2+m3+m4+m5)*100)/500;

    if(per<=35){
        printf("Fail");
    }else if(per>=36 && per<=45){
        printf("Pass");
    }else if(per>=46 && per<=60){
        printf("Second class");
    }else if(per>=61 && per<=70){
        printf("First class");
    }else{
        printf("Distinction");
    }
    
    return 0;
}