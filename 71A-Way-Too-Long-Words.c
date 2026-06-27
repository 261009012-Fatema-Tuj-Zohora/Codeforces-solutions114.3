#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        char word[101];
        for (int i = 0; i < n; i++) {
            if (scanf("%s", word) == 1) {
                int len = 0;
                while (word[len] != '\0') {
                    len++;
                }
                
                if (len > 10) {
                    printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
                } else {
                    printf("%s\n", word);
                }
            }
        }
    }
    return 0;
