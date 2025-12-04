#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int sum=0,digits=0;
        int temp=i;

        while(temp>0){
            temp/=10;
            digits++;
        }
        temp=i;

        while(temp>0){
            int d = temp % 10;
            int p = 1;
            for(int j=1;j<=digits;j++)
                p *= d;
            sum += p;
            temp /= 10;
        }
        
        if(sum==i)
            printf("%d ",i);
    }
    return 0;
}