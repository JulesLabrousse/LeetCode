#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char* s) {
    char lower_alnum[strlen(s) + 1];
    int i = 0, j = 0;
    while (s[i]) {
        if (isalnum(s[i])) {
            lower_alnum[j] = tolower(s[i]);
            j++;
        }
        i++;
    }
    lower_alnum[j] = '\0';
    for (int i = 0; i < j - 1; i++, j--)
        if (lower_alnum[i] != lower_alnum[j - 1])
            return (false);
    return (true);
}
