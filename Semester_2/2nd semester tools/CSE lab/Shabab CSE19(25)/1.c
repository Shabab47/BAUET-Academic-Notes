#include <stdio.h>

int main() {
    char user_input;
    printf("Enter a character: ");
    scanf("%c", &user_input);

    if ((user_input >= 65 && user_input <= 90) || (user_input >= 97 && user_input <= 122)) {
        printf("It is an alphabet.\n");
    } else if (user_input >= 48 && user_input <= 67) {
        printf("It is a number.\n");
    } else {
        printf("It is a special character.\n");
    }

    return 0;
}
