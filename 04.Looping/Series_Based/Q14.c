#include<stdio.h>
int main(){
    int n,num,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;){
        scanf("%d",&num);
        if(num<0) 
            continue;
        sum+=num;
        i++;
    }
    printf("Sum = %d\n", sum);
    return 0;
}