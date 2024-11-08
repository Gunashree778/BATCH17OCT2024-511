1.Check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer: 34
Output
34 = 3 + 31

34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4

NoofWays=-1

#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0;  
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    int num;
    int count = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 2) {
        printf("No of Ways = -1\n");
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            printf("%d = %d + %d\n", num, i, num - i);
            count++;
        }
    }
    if (count == 0) {
        printf("No ofWays = -1\n");
    } else {
        printf("No ofWays = %d\n", count);
    }

    return 0;
}


