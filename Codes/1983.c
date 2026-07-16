#include <stdio.h>

int main() {
    int n, id, chosenId;
    double note, maxNote = -1.0;

    scanf("%d", &n);

    while (n--) {
        scanf("%d %lf", &id, &note);

        if (note > maxNote) {
            maxNote = note;
            chosenId = id;
        }
    }

    if (maxNote >= 8.0)
        printf("%d\n", chosenId);
    else
        printf("Minimum note not reached\n");

    return 0;
}
