#include <stdio.h>

void findUnion(int a[], int n, int b[], int m)
{
    printf("Union: ");

    // Print unique elements from first array
    for (int i = 0; i < n; i++)
    {
        int duplicate = 0;

        for (int k = 0; k < i; k++)
        {
            if (a[i] == a[k])
            {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate)
            printf("%d ", a[i]);
    }

    // Print unique elements from second array
    for (int i = 0; i < m; i++)
    {
        int found = 0;

        // Check if already in first array
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                found = 1;
                break;
            }
        }

        // Check duplicates inside second array
        for (int k = 0; k < i; k++)
        {
            if (b[i] == b[k])
            {
                found = 1;
                break;
            }
        }

        if (!found)
            printf("%d ", b[i]);
    }

    printf("\n");
}

void findIntersection(int a[], int n, int b[], int m)
{
    printf("Intersection: ");

    for (int i = 0; i < n; i++)
    {
        int alreadyPrinted = 0;

        for (int k = 0; k < i; k++)
        {
            if (a[i] == a[k])
            {
                alreadyPrinted = 1;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    printf("\n");
}

int main()
{
    int n, m;

    printf("Enter size of first array: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &m);
    int b[m];

    printf("Enter elements of second array:\n");
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    findUnion(a, n, b, m);
    findIntersection(a, n, b, m);

    return 0;
}