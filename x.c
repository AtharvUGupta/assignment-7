#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool check(char arr[],int n,char m){
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            return 1;
        }
    }
    return 0;

}


int main(){
    char str[10000];
    char ch;
    

    printf("Enter the string :");
    gets(str);
    
    printf("Enter the character to search for :");
    scanf("%c",&ch);
    int c=strlen(str);
    int x=check(str,c,ch);
    if(x==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    
    
    
}