#include <stdio.h>

int main(void) {
    char line[10000];
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;

    if (fgets(line, sizeof(line), stdin) == NULL) return 0;

    for (int i = 0; line[i] != '\0' && line[i] != '\n'; i++) {
        char ch = line[i];

        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if ((ch >= 'A' && ch <= 'Z') ||
                   (ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("%d %d %d %d\n", vowels, consonants, digits, spaces);
    return 0;
}