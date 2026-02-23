#include <stdio.h>
#include <string.h>
int main(){
    char name[20] = "Avnish Saini";
    // printf("Enter your name: ");
    // scanf("%19[^\n]", name);
    // fgets(name, sizeof(name) / sizeof(name[0]), stdin);
    // name[strcspn(name, "\n")] = '\0';
    int i = 0;
    while(name[i] != '\0'){
        printf("%c", name[i++]);
    }
    printf("\n");
    char name1[] = "Nishu";
    char *ptr_n1 = name1;
    while(*ptr_n1 != '\0'){
        printf("%c", *ptr_n1++);
    }
    printf("\n");
    char s_name[] = "Bhavna";
    printf("%s\n", s_name);
    char *p_a_name = "Ash";
    while(*p_a_name != '\0'){
        printf("%c", *p_a_name++);
    }
    printf("\n");
    return 0;
}