#include <stdio.h>

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
    }
}

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return 1;   // YES
    }
    return 0;   // NO
}

int binarySearch(int arr[], int n, int key)
{
    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == key)
            return 1;   // YES
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return 0;   // NO
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, n);

    // printf("\nSorted array: ");
    // for (int i = 0; i < n; i++)
    //     printf("%d ", arr[i]);

    int key;
    printf("\nEnter element to search: ");
    scanf("%d", &key);

    // Linear Search
    if (linearSearch(arr, n, key))
        printf("Linear Search: YES, element found\n");
    else
        printf("Linear Search: NO, element not found\n");

    // Binary Search
    if (binarySearch(arr, n, key))
        printf("Binary Search: YES, element found\n");
    else
        printf("Binary Search: NO, element not found\n");

    return 0;
}
