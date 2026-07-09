#include <stdio.h>
#include <string.h>

int main() {
    int QT;
    scanf("%d", &QT);

    while (QT--) {
        char name1[101], choice1[10];
        char name2[101], choice2[10];
        long long n, m;

        scanf("%s %s %s %s", name1, choice1, name2, choice2);
        scanf("%lld %lld", &n, &m);

        if ((n + m) % 2 == 0) {
            if (strcmp(choice1, "PAR") == 0)
                printf("%s\n", name1);
            else
                printf("%s\n", name2);
        } else {
            if (strcmp(choice1, "IMPAR") == 0)
                printf("%s\n", name1);
            else
                printf("%s\n", name2);
        }
    }

    return 0;
}
