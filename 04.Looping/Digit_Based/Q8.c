#include<stdio.h>
int main(){
    int n,temp;
    scanf("%d", &n);
    for (int i=0;i<=9;i++){
        int count=0;
        temp=n;

        while(temp>0){
            if(temp%10==i)
                count++;
            temp/=10;
        }
        if(count>0)
            printf("%d -> %d\n",i,count);
    }
    return 0;
}