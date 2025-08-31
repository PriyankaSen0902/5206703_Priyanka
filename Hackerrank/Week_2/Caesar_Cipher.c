#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesarCipher(char *s, int k) {
    int n = strlen(s);
    k = k % 26;  // handle large k values

    for (int i = 0; i < n; i++) {
        if (isalpha(s[i])) {
            if (isupper(s[i])) {
                s[i] = ((s[i] - 'A' + k) % 26) + 'A';
            } else {
                s[i] = ((s[i] - 'a' + k) % 26) + 'a';
            }
        }
        // else leave non-letters unchanged
    }
}

int main() {
    int n, k;
    scanf("%d", &n);   // length of string
    char s[1001];      // enough space for input
    scanf("%s", s);
    scanf("%d", &k);

    caesarCipher(s, k);

    printf("%s\n", s);

    return 0;
}
