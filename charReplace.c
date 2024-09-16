#include <stdio.h>

void replace(char str[], char replace_what, char replace_with)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == replace_what)
        {
            str[i] = replace_with;
        }
        i++;
    }
}

int main()
{
    char input[] = "";
    char r_what, r_with;

    printf("Enter a string: ");
    scanf("%s", input);
    // printf("You entered: %s\n", input);

    printf("Enter the character to replace: ");
    scanf(" %c", &r_what);

    printf("Replace that character with: ");
    scanf(" %c", &r_with);

    replace(input, r_what, r_with);
    printf("Result: %s\n", input);

    return 0;
}