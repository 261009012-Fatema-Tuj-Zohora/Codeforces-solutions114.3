#include <stdio.h>

int main() {
    int weight;
    
    if (scanf("%d", &weight) == 1) {
        if (weight > 2 && weight % 2 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
