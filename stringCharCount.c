#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 1024

int main()
{
    char str[MAX_SIZE];
    static int counted[MAX_SIZE];

    printf("Enter a string: \n");
    // scanf("%s", str); //Stop when meets a blank character
    fgets(str, MAX_SIZE, stdin);

    printf("You entered: %s\n", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (counted[i] || !isalpha(str[i])) // skip counted characters and special characters
            continue;

        int count = 0;
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[i] == str[j])
            {
                count++;
                counted[j] = 1; // Mark as counted to avoid duplicate counts
            }
        }
        printf("Character '%c' appears %d times\n", str[i], count);
    }
    return 0;
}