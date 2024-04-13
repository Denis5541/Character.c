#include <stdio.h>
int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("%c is a capital letter.\n", ch);
    } else if (islower(ch)) {
        printf("%c is a small case letter.\n", ch);
    } else if (isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is a special symbol.\n", ch);
    }

    return 0;
}
