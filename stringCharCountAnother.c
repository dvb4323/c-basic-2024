#include <stdio.h>
#include <ctype.h> // For tolower and isalpha

#define ALPHABET_SIZE 26 // 26 letters in the English alphabet

int main()
{
    char str[1024];                // Input string
    int freq[ALPHABET_SIZE] = {0}; // Array to store frequency of each letter

    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin); // Read input string

    // Traverse the string and count occurrences of each alphabetic character
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i])) // Only count alphabetic characters
        {
            // Convert character to lowercase and increment corresponding index
            freq[tolower(str[i]) - 'a']++;
        }
    }

    // Print the frequency of each letter
    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        if (freq[i] > 0) // Only print characters that appear in the string
        {
            printf("Character '%c' appears %d times\n", i + 'a', freq[i]);
        }
    }

    return 0;
}
