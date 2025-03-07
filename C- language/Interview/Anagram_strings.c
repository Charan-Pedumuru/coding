#include <stdio.h>
#include <string.h>

// Function to compare two characters (used for sorting)
int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

// Function to check if two strings are anagrams
int areAnagrams(char *s1, char *s2) {
    
    // Check if lengths are equal
    if (strlen(s1) != strlen(s2)) {
        return 0; 
    }

    // Sort both strings
    qsort(s1, strlen(s1), sizeof(char), compare);
    qsort(s2, strlen(s2), sizeof(char), compare);

    // Compare sorted strings
    return strcmp(s1, s2) == 0;
}

int main() {
    char s1[] = "geeks";
    char s2[] = "kseeg";
    printf("%s\n", areAnagrams(s1, s2) ? "true" : "false");

    return 0;
}
