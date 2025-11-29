#include<stdio.h>
int main(){
    int n,rev=0;
    scanf("%d",&n);
    int org=n;
    while(n>0){
        int last=n%10;
        rev=rev*10+last;
        n/=10;
    }
    if(org==rev)
        printf("%d is a Palindrome",org);
    else
        printf("%d is not a Palindrome",org);
    return 0;
}