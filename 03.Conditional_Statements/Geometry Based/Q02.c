#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a){
        if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
            printf("The triangle is Right-angled.\n");
        else 
            printf("The triangle is NOT Right-angled.\n");
        }
    else 
        printf("The given sides do not form a valid triangle.\n");
    return 0;
}

//right angle triangle 
//         -> any sum of Squares of 2 sides is equal to the square third side
//3 4 5 -> 9 + 16 = 25