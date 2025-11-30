#include<stdio.h>
int main(){
    printf("Vowels: ");
    for(char i='A';i<='Z';i++){
        if(i=='A'||i=='E'||i=='I'||i=='O'||i=='U')
            printf("%c ",i);
    }
    printf("\nConsonants: ");
    for(char i='A';i<='Z';i++){
        if(!(i=='A'||i=='E'||i=='I'||i=='O'||i=='U'))
            printf("%c ",i);
    }
    return 0;
}