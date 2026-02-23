#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    char ch;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // remove newline
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // ---- LENGTH ----
    printf("Length: %lu\n", strlen(str1));

    // ---- SEARCH CHARACTER ----
    printf("Enter character to search: ");
    scanf(" %c", &ch);

    if (strchr(str1, ch))
        printf("Character found\n");
    else
        printf("Character not found\n");

    // ---- CONCATENATE ----
    strcat(str1, str2);
    printf("Concatenated: %s\n", str1);

    // ---- REVERSE ----
    return 0;
}