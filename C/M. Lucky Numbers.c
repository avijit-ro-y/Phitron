#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int foundLucky = 0; 

    for (int i = A; i <= B; i++) {
        int num = i;
        int isLucky = 1; // Assume it's lucky until proven otherwise

        // Check if the current number is lucky
        while (num > 0) {
            int digit = num % 10;
            if (digit != 4 && digit != 7) {
                isLucky = 0; // Not a lucky number
                break; // No need to check further
            }
            num /= 10;
        }
        if (isLucky) {
            printf("%d ", i);
            foundLucky = 1; 
        }
    }

    if (!foundLucky) {
        printf("-1"); 
    }

    return 0;
}
