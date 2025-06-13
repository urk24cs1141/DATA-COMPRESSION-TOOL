#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "aaabbccccd";
    int i, count;

    printf("Original String: %s\n", str);
    printf("Compressed: ");

    for (i = 0; i < strlen(str); i++) {
        count = 1;
        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
    }

    return 0;
}
