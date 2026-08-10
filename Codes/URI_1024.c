#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    while (n--) {
        char str[1001];

        fgets(str, sizeof(str), stdin);

        // Remove newline
        str[strcspn(str, "\n")] = '\0';

        int len = strlen(str);

        // Step 1: Shift letters 3 positions right
        for (int i = 0; i < len; i++) {
            if ((str[i] >= 'a' && str[i] <= 'z') ||
                (str[i] >= 'A' && str[i] <= 'Z')) {
                str[i] += 3;
            }
        }

        // Step 2: Reverse
        for (int i = 0, j = len - 1; i < j; i++, j--) {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }

        // Step 3: Shift second half one position left
        int middle = len / 2;

        for (int i = middle; i < len; i++) {
            str[i]--;
        }

        printf("%s\n", str);
    }

    return 0;
}
