#include<stdio.h>

int main(){

    char str[10000];
    char arr[10000];
    printf("Enter the main string :");
    gets(str);

    printf("Enter the substring :");
    scanf("%s",&arr);

    char *ptr=strstr(str,arr);
    if(ptr==NULL){
        printf("It is absent");
    }
    else{
        printf("It is present");
    }




}