A2. Program to find nth number made of given four digits 1, 4,6 and 9 as the only digits. 
Input Format:
The First Line Of Input Contains T no of test cases
The Second Line Of Input Contains N as input taken.
Output Format:
Print the number of digits in the nth number .
Constraints:
1<=T<=100
1<=N<=100
Examples:
Input : 6
Output : 14
1,4 6, 9.11,14
Input : 21
Output : 111
Program: 
#include <stdio.h>
int prime_digits[] = {1,4,6,9};
void generate_prime_digit_numbers(int *seq, int max_n) {
    int idx = 0;  
    for (int i = 0; i < 4; i++) {
        seq[idx++] = prime_digits[i];
    }
    for (int i = 0; i < idx && idx < max_n; i++) {
        int num = seq[i];
        for (int j = 0; j < 4; j++) 
{
            int new_num = num * 10 + prime_digits[j];
            seq[idx++] = new_num;
            if (idx >= max_n) break;  
        }
    }
}

int main()
 {
    int T, N;
    scanf("%d", &T);
    int seq[10000];
    generate_prime_digit_numbers(seq, 10000);
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        printf("%d\n", seq[N-1]);
    }

    return 0;
}

