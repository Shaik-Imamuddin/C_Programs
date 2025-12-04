#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        int temp=i;
        while(temp>9){
            int sum=0;
            while(temp>0){
                sum+=temp%10;
                temp/=10;
            }
            temp=sum;
        }
        if(temp==1)
            printf("%d ",i);
    }
    return 0;
}