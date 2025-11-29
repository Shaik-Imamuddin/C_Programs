#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int original=n;
    int last=n%10;
    int first;
    int count=0;
    while (n > 0) {
        first = n % 10; 
        n /= 10;
        count++;
    }
    int power = 1;
    for (int i = 1; i < count - 1; i++) {
        power *= 10;
    }
    int middle = (original % power) / 10;
    int swapped = last * power * 10 + middle * 10 + first;
    printf("After swapping: %d\n", swapped);
    return 0;
}   