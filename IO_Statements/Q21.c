#include <stdio.h>
int main() {
    int roll;
    char name[50];
    scanf("%d", &roll);
    scanf(" %[^\n]", name);
    printf("Roll No: %d, Name: %s\n", roll, name);
    return 0;
}