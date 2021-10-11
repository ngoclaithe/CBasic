#include <stdio.h>
#include <string.h>

void replace(char str[], char to_replace, char for_replace)
{
    int i;

    for (i = 0; i < strlen(str); ++i)
    {
        if (str[i] == to_replace)
            str[i] = for_replace;
    }
}

int main() {
    char str[3], to_replace, for_replace;

    printf("Enter a string of 3 characters: ");
    scanf("%s", &str);
    printf("Enter the character to be replaced: ");
    scanf(" %c", &to_replace);
    printf("Enter the character to replace with: ");
    scanf(" %c", &for_replace);

    printf("Old string: %s \n", str);
    replace(str, to_replace, for_replace);
    printf("New string: %s", str);
}