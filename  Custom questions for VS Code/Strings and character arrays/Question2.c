#include <stdio.h>

int main(void) {
    char text[10000];

    if (scanf("%9999s", text) != 1) return 0;

    for (int i = 0; text[i] != '\0';) {
        char current = text[i];
        int count = 0;

        while (text[i] == current) {
            count++;
            i++;
        }

        printf("%c%d", current, count);
    }

    printf("\n");
    return 0;
}