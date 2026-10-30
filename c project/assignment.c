#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char password[100];
    int upper = 0, lower = 0, digit = 0, special = 0;

    printf("Enter password: ");
    scanf("%s", password);

    int length = strlen(password);

    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i]))
            upper = 1;
        else if (islower(password[i]))
            lower = 1;
        else if (isdigit(password[i]))
            digit = 1;
        else
            special = 1;
    }

    printf("\nPassword Checks:\n");
    printf("Length (8 or more): %s\n", length >= 8 ? "Yes" : "No");
    printf("Uppercase: %s\n", upper ? "Yes" : "No");
    printf("Lowercase: %s\n", lower ? "Yes" : "No");
    printf("Digit: %s\n", digit ? "Yes" : "No");
    printf("Special Character: %s\n", special ? "Yes" : "No");

    if (length >= 8 && upper && lower && digit && special)
        printf("\nPassword Strength: Strong");
    else
        printf("\nPassword Strength: Weak");

    return 0;
}