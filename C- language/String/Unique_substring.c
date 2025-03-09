#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to check if a substring is unique
int isUnique(const char *str, int start, int end) {
    for (int i = start; i < end; i++) {
        for (int j = i + 1; j <= end; j++) {
            if (str[i] == str[j]) {
                return 0; // Not unique
            }
        }
    }
    return 1; // Unique
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    printf("Unique substrings:\n");
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (isUnique(str, i, j)) {
                // Print the substring
                for (int k = i; k <= j; k++) {
                    printf("%c", str[k]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}