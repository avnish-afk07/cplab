#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    char ch;
    int i = 0, j;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    i = 0;
    while (str1[i] != '\0')
        i++;
    printf("Length: %d\n", i);

    printf("Enter character to search: ");
    scanf(" %c", &ch);

    int found = 0;
    for (j = 0; str1[j] != '\0'; j++)
    {
        if (str1[j] == ch)
        {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Character found\n");
    else
        printf("Character not found\n");

    // i = 0;
    // while (str1[i] != '\0')
    //     i++;

    j = 0;
    while (str2[j] != '\0')
    {
        str1[i++] = str2[j++];
    }
    str1[i] = '\0';

    printf("Concatenated: %s\n", str1);

    int len = 0;
    while (str1[len] != '\0')
        len++;

    for (i = 0; i < len / 2; i++)
    {
        char temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }

    printf("Reversed: %s\n", str1);

    return 0;
}