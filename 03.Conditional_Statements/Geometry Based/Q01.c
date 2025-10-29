#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        if(a==b && b==c)
            printf("The triangle is Equilateral.\n");
        else if(a==b || b==c || a==c)
            printf("The triangle is Isosceles.\n");
        else
            printf("The triangle is Scalene.\n");
    }
    else
        printf("The given sides do not form a valid triangle.\n");
    return 0;
}

//valid Triangle condition - sum of 2 sides > 3rd side
//Equilateral - if all 3 sides are equal
//Isosceles - Any 2 sides are equal
// Scalene - All 3 sides are different