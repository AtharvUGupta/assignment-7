#include<stdio.h>
#include<stdbool.h>
bool pal(char arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-i-1]){
            return 0;
        }

    }
    return 1;

}

int main(){
    char arr[100000];
    
    printf("Enter the string :");
   
        scanf("%s",&arr);
   int n=strlen(arr);
   int x=pal(arr,n);
   if(x==1){
    printf("Yes");
   }
   else{
    printf("No");
   }
   

    


}