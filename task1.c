#include <stdio.h>
#include <stdlib.h>
#include <stdin.h>


void readNames(char Names[][30], int maxNames) {
    int numNames;

    printf("Enter the number of names, upto %d:", maxNames)
    scanf()
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 4; j++) 
        }

int main() {
    int maxNames = 5;
    char Names[MaxNmes][30];

    readNames(Names, maxNames);

    printf("Names entered:\n");
    for (int i = 0; i < maxNames; i++) {
        printf("%s\n", Names[i]);
    }

    return 0;
}