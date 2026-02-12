// #include <stdio.h>
// int main()
// {
//     // int x = 5, y = 2;
//     // float f = (float)x / y;
//     // if("True") printf("%.2f\n", f);
//     int marks = 0;
//     char grade = 'a';
//     printf("Enter your marks: ");
//     scanf("%d", &marks);
//     if(marks > 90) grade = 'A';
//     else if(marks > 80) grade = 'B';
//     else if(marks > 70) grade = 'C';
//     else if(marks > 60) grade = 'D';
//     else if(marks > 50) grade = 'E';
//     else if(marks == 50) grade = 'P';
//     else grade = 'F';
//     if(grade == 'P') printf("Pass\n");
//     else if(grade == 'F') printf("Fail\n");
//     else printf("%c\n", grade);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int marks = 0;
//     char grade = 'a';

//     printf("Enter your marks: ");
//     scanf("%d", &marks);

//     switch (marks / 10)
//     {
//     case 10:
//     case 9:
//         if (marks == 90)
//             grade == 'B';
//         else
//             grade = 'A';
//         break;

//     case 8:
//         grade = 'B';
//         break;

//     case 7:
//         grade = 'C';
//         break;

//     case 6:
//         grade = 'D';
//         break;

//     case 5:
//         if (marks == 50)
//             grade = 'P';
//         else
//             grade = 'E';
//         break;

//     default:
//         grade = 'F';
//     }

//     if (grade == 'P')
//         printf("Pass\n");
//     else if (grade == 'F')
//         printf("Fail\n");
//     else
//         printf("%c\n", grade);

//     return 0;
// 

// #include <stdio.h>

// int main()
// {
//     int year = 0;
//     printf("Enter the year: ");
//     scanf("%d", &year);
//     if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) printf("Leap year.\n");
//     else printf("Not a Leap year.\n");
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int n1, n2 = 0;
//     char op = '+';

//     printf("Enter first number: ");
//     scanf("%d", &n1);
//     printf("Enter second number: ");
//     scanf("%d", &n2);
//     printf("Enter an operator(+, -, *, /, or e for exponentiation): ");
//     scanf("\n%c", &op);

//     switch (op)
//     {
//     case '+':
//         printf("\n%d + %d = %d\n",n1, n2, n1 + n2);
//         break;
//     case '_':
//         printf("\n%d - %d = %d\n",n1, n2, n1 - n2);
//         break;
//     case '*':
//         printf("\n%d * %d = %d\n",n1, n2, n1 * n2);
//         break;
//     case '/':
//         printf("\n%d / %d = %d\n",n1, n2, n1 / n2);
//         break;
//     case 'p':
//         printf("\n%d ** %d = %.2f\n",n1, n2, pow(n1, n2));
//         break;
//     default:
//         printf("Please enter a valid operator.\n");
//         break;
//     }

//     return 0;
// }