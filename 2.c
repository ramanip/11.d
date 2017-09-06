#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    int LowercaseVowel, UppercaseVowel;

    do {
        printf("Enter an alphabet: ");
        scanf(" %c", &c);
    }
    
    while (!alpha(c));
    LowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    
    UppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    
    if (LowercaseVowel || UppercaseVowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
