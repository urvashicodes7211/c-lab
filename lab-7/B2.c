//Check whether character is an alphabet or not using conditional operator. 

#include<stdio.h>
int main(){
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    ch>='a'&&ch<='z' || ch>='A'&&ch<='Z' ? printf("alphabet") :printf("NOT alphabet");
    return 0;
}