#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter an uppercase string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("Lowercase string: %s\n", str);
    return 0;
}
