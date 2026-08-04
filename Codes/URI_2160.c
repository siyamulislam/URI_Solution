#include <stdio.h>
#include <string.h>

int main() {
    char str[501];

    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    // Remove newline if present
    if (str[len - 1] == '\n')
        len--;

    if (len <= 80)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
