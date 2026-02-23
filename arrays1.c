#include <stdio.h>
#include <stdbool.h>

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
        if (arr[i] == key)
            return 1;
    return 0;
}

int binarySearch(int arr[], int n, int key)
{
    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == key)
            return 1;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0;
}

int main()
{
    int arr[10];
    int n = 0, m = 0;
    int c;

    do
    {
        printf("\n1. Create data");
        printf("\n2. Display data");
        printf("\n3. Update element");
        printf("\n4. Delete element");
        printf("\n5. Append element");
        printf("\n6. Insert element");
        printf("\n7. Sort the array and display");
        printf("\n8. Find element using Linear Search");
        printf("\n9. Sort the array and find element using Binary Search");
        printf("\n10. Count the number of occurences of an element");
        printf("\n11. Find the largest element");
        printf("\n12. Find the smallest element");
        printf("\n13. Exit");
        printf("\nEnter your choice: ");

        scanf(" %d", &c);

        switch (c)
        {
        case 1:
            printf("Enter number of elements (max 10): ");
            scanf("%d", &n);
            if (n > 10) n = 10;
            for (int i = 0; i < n; i++)
            {
                printf("Enter element %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
            break;

        case 2:
            if (n == 0)
                printf("No data available.\n");
            else
            {
                for (int i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\nCapacity: %lu\n", sizeof(arr) / sizeof(arr[0]));
            }
            break;

        case 3:
        {
            int pos, val;
            if (n == 0) break;
            scanf("%d", &pos);
            scanf("%d", &val);
            if (pos >= 1 && pos <= n)
                arr[pos - 1] = val;
            break;
        }

        case 4:
        {
            int pos;
            if (n == 0) break;
            scanf("%d", &pos);
            if (pos >= 1 && pos <= n)
            {
                for (int i = pos - 1; i < n - 1; i++)
                    arr[i] = arr[i + 1];
                n--;
            }
            break;
        }

        case 5:
        {
            if (n >= 10) break;
            scanf("%d", &m);
            if (m <= 10 - n)
            {
                for (int i = n; i < n + m; i++)
                    scanf("%d", &arr[i]);
                n += m;
            }
            break;
        }

        case 6:
        {
            if (n == 10) break;
            int pos, val;
            scanf("%d", &pos);
            scanf("%d", &val);
            if (pos >= 1 && pos <= n + 1)
            {
                for (int i = n; i >= pos; i--)
                    arr[i] = arr[i - 1];
                arr[pos - 1] = val;
                n++;
            }
            break;
        }

        case 7:
            if (n == 0){
                printf("No data available.\n");
                break;
            }
            insertionSort(arr, n);
            for (int i = 0; i < n; i++)
                printf("%d ", arr[i]);
            printf("\n");
            break;

        case 8:
        {
            if (n == 0){
                printf("No data available.\n");
                break;
            }
            int key;
            scanf("%d", &key);
            if (linearSearch(arr, n, key))
                printf("YES\n");
            else
                printf("NO\n");
            break;
        }

        case 9:
        {
            if (n == 0){
                printf("No data available.\n");
                break;
            }
            int key;
            insertionSort(arr, n);
            scanf("%d", &key);
            if (binarySearch(arr, n, key))
                printf("YES\n");
            else
                printf("NO\n");
            break;
        }

        case 10:
        {
            if (n == 0){
                printf("No data available.\n");
                break;
            }
            int key, count = 0;
            printf("\nEnter element to search: ");
            scanf("%d", &key);
            for (int i = 0; i < n; i++)
                if (arr[i] == key)
                    count++;
            printf("Count: %d\n", count);
            break;
        }
        case 11:
            if (n == 0){
                printf("No data available.\n");
                break;
            }
            insertionSort(arr, n);
            printf("The largest element is %d\n", arr[n - 1]);
            break;
        case 12:
            if (n == 0){
                printf("No data available.\n");
                break;
            }
            insertionSort(arr, n);
            printf("The smallesr element is %d\n", arr[0]);
            break;
        case 13:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice.\n");
        }

    } while (true);

    return 0;
}
