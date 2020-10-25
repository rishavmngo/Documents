#include <stdio.h>
#include <ctype.h>

int main()
{
    char alpha;
    int vowel = 0;
    printf("Enter a sentence: ");

    while ((alpha = getchar()) != '\n')
    {
        switch (tolower(alpha)) {
            
            case 'a': case 'e': case 'i': case 'o': case 'u':
                vowel += 1;
        }
    }
    printf ("Your Sentence contains %d vowels.", vowel);
    return 0;
}
