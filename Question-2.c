#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    int temp = num;
    do {
        count++;
        temp = temp / 10;
    } while (temp > 0);

    printf("Total number of digits: %d\n", count);
    return 0;
}
