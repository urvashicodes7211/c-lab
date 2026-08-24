//Check whether the entered character is upper case, lower case, digit or any special character.

#include<stdio.h>
int main(){
    char ch;

    printf("Enter character:");
    scanf("%c",&ch);

    if(ch>='A'&&ch<='Z'){
        printf("Upper case");
    }else if(ch>='a'&&ch<='z'){
        printf("lower case");
    }else if(ch>='0'&&ch<='9'){
        printf("digit");
    }else{
        printf("special character");
    }

    return 0;
}