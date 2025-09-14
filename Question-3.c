#include <stdio.h>

int main() {
    int num, first, last;
    printf("Enter any number: ");
    scanf("%d", &num);

    last = num % 10;  

    int temp = num;
    while (temp >= 10) {
        temp = temp / 10;
    }
    first = temp;   

    int sum = first + last;
    printf("The sum of the first and the last digit: %d\n", sum);

    return 0;
}
