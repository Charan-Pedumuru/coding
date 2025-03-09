#include <stdio.h>
#include <string.h>

#define MAX_CHAR 26

int longestUniqueSubstr(char* s) {
    int n = strlen(s);
    int res = 0;

    for (int i = 0; i < n; i++) {

        // Initializing all characters as not visited
        int vis[MAX_CHAR] = {0};

        for (int j = i; j < n; j++) {

            // If current character is visited
            // Break the loop
            if (vis[s[j] - 'a'] == 1)
                break;

            // Else update the result if this window is larger,
            // and mark current character as visited.
            else {
                res = (res > (j - i + 1)) ? res : (j - i + 1);
                vis[s[j] - 'a'] = 1;
            }
        }
    }
    return res;
}

int main() {
    char s[] = "geeksforgeeks";
    printf("%d", longestUniqueSubstr(s));
    return 0;
}
