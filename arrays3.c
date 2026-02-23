#include <stdio.h>

int main(){
    int n = 0;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    while (n < 5){
        printf("Invalid Input! Subjects must be 5 or greater than 5.\n");
        printf("Enter the number of subjects: ");
        scanf("%d", &n);
    }
    int arr[n], count_f = 0;
    for(int i = 0; i < n; i++){
        printf("Enter the marks of subject no. %d: ", i + 1);
        scanf("%d", &arr[i]);
        if(arr[i] < 50){
            count_f++;
        }
    }
    if(count_f > 2){
        printf("Fail!\n");
    }
    else if(count_f <= 2 && count_f > 0)
    printf("Reapper!\n");
    else printf("Pass!\n");
    return 0;
}