//mirrored right angled  triangle
// #include <stdio.h>

// int main() {

//     for (int i = 5; i >= 1; i--) {
//         for (int j = 1; j <= 5; j++) {
            
//             if (j <= 5 - i) {
//                 printf("  ");
//             } else {
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Please enter a number: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 0; k < 2 * i - 1; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

// }

// #include <stdio.h>

// int main()
// {
//     int n;
//     int j = 0, k = 0;
//     printf("Please enter a number: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 0; k < 2 * i - 1; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

// }


#include <stdio.h>

int main() {
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        for (int s = 0; s < n - i - 1; s++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }

        for (int j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    for (int i = n - 1 ; i >= 0; i--) {
        if(i==n - 1) continue;
        for (int s = 0; s < n - i - 1; s++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }

        for (int j = i - 1; j >= 0; j--) {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }
    
    return 0;
}
