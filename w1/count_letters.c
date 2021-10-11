#include <stdio.h>

#define ALPHABET_LEN 26

int main()
{
    int i = 0;
    int count[ALPHABET_LEN] = {0};
    char c = '\0';

    printf("Enter a line: \n");

    c = getchar();
    while (c != '\n' && c >= 0)
    {
        {
            if (c <= 'z' && c >= 0)
            {
                ++count[c - 'a'];
            }
            c = getchar();
        }
    }
    while (i < ALPHABET_LEN)
    {
        if (count[i] > 0)
        {
            printf("Letter %c appeared %d time(s)\n", i + 97, count[i]);
        }
        ++i;
    }
    return 0;
}