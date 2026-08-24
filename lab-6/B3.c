/*Three  sides  of  a  triangle  are  entered  through  the  keyboard,  WAP  to  check  whether  the  triangle  is 
isosceles, equilateral, scalene or right-angled equilateral. */

#include<stdio.h>
int main(){
    int s1 , s2 , s3;
    printf("Enter three sides : ");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1==s2 && s2==s3 && s3==s1){
        printf("equilateral triangle");
    }else if(s1==s2 || s2==s3 || s3==s1){
        printf("isosceles triangle");
    }else if((s1*s1 + s2*s2 == s3*s3) ||
            (s1*s1 + s3*s3 == s2*s2) ||
            (s2*s2 + s3*s3 == s1*s1)) {
        printf("Right-angled triangle");
    }else{
        printf("scalene triangle");
    }
    return 0;
}