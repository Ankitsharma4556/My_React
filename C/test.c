#include <stdio.h>

int main() {
    char buffer[5];
    printf("Enter a string: ");
    if (fgets(buffer, 5, stdin) != NULL) {
        printf("You entered: %s\n", buffer);
    }
    return 0;
}
