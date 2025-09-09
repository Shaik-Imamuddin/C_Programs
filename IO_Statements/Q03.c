#include <stdio.h>
int main() {
    char msg[100];
    scanf("%[^\n]", msg);
    printf("%s\n", msg);
    return 0;
}