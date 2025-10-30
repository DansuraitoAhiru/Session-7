#include <stdio.h>
#include <math.h>
int main() {
    int n, original, count = 0, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    original = n;

    int temp = n;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if (sum == original) {
        printf("%d la so Armstrong\n", original);
    } else {
        printf("%d khong phai la so Armstrong\n", original);
    }

    return 0;
}
