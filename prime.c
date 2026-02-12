// #include <stdio.h>
// #include <math.h>

// int main()
// {

//     int n = 1;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     for(int i = 3; i <= pow(n,0.5) + 1; i++){
//         if(n % 2 == 0 || n == 1){
//             printf("The number is not prime.\n");
//             return 0;
//         }
//         if(n % i == 0){
//             printf("The number is not prime.\n");
//             return 0;
//         }

//     }
//     printf("The number is prime.\n");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num, sum = 0, digit;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     while (num != 0) {
//         digit = num % 10;
//         sum = sum*10 + digit;
//         num /= 10;
//     }

//     printf("answer is: %d\n", sum);

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int start = 0, end = 0, sum = 0;
//     printf("Please enter a start: ");
//     scanf("%d", &start);
//     printf("\nPlease enter an end: ");
//     scanf("%d", &end);
//     for(int i = start; i <= end; i++){
//         if(i % 2 == 0) sum += i;
//     }
//     printf("%d\n", sum);
// }

// #include <stdio.h>

// int main()
// {
//     // euclidian theorem for gcd
//     int n1, n2, temp;
//     printf("Enter two positive integers: ");
//     scanf("%d %d", &n1, &n2);

//     // Euclidean Algorithm
//     while (n2 != 0)
//     {
//         temp = n2;
//         n2 = n1 % n2;
//         n1 = temp;
//     }
//     printf("GCD = %d\n", n1);
//     return 0;
// }
