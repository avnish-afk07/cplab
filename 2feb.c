#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a;
    char c;
    float f;
    double d;
    char name[20];
    char s[10];
    bool flag = true;
    scanf("%d", &a);
    getchar(); // Gets the input buffer i.e in this case is enter or \n.
    scanf("\n%c", &c); // We can use newline or space before input of char to prevent buffering logs.
    scanf("\n%f", &f); //Float takes input upto 6 decimals.
    scanf("\n%lf", &d); //lf represents long float or double.
    scanf("\n%9s", s); // Don't use & before string as string array variable already gives starting address of array.  // Normal string input. A number or size before % prevents overflowing.
    getchar();
    // fflush(stdin); // Flushes the input buffer log.
    fgets(name, sizeof(name), stdin); // Use fgets() instead of scanf in case of strings. fgets = Function_Get_String
    printf("Number: %d\n", a);
    printf("Character: %c\n", c);
    printf("Float: %f\n", f);
    printf("Double: %lf\n", d);
    printf("String: %s\n", s);
    printf("Name: %s\n", name);
    // int x = 0, y = 0;
    // int val = (x=10,y=5,x+y);
    // printf("%d",val);
    return 0;
}