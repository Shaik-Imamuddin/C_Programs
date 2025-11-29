#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("%d is not a Perfect Square",n);
        return 0;
    }
    int r=(int)sqrt(n);  
    if (r*r==n)
        printf("%d is a Perfect Square",n);
    else
        printf("%d is Not a Perfect Square",n);

    return 0;
}
