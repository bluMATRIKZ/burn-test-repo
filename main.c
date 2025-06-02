#include <stdio.h>

int main() {
    char name[50];

    printf("Hello! Welcome to the C test program :P.\n");

    printf("Enter your name: ");
    scanf("%49s", name);  // Limits input size to prevent buffer overflow

    printf("Nice to meet you, %s!\n", name);
    
    return 0;
}
