Input Format:
First Line Of Input Contains T Number Of Test Cases
Second Line Of Input Contains an input Number N.

Output Format:
Print the Nth number of sequence and it should be only prime.

Constraints:
1<=T<=100
1<=N<=10000

Examples :
Input  :
1
10
Output :
 33
#include <stdio.h>
int prime_digits[] = {1,4,6,9};
void generate_prime_digit_numbers(int *sequence, int max_n) {
    int idx = 0;  // Index for the sequence array
    for (int i = 0; i < 4; i++) {
        sequence[idx++] = prime_digits[i];
    }
    for (int i = 0; i < idx && idx < max_n; i++) {
        int num = sequence[i];
        for (int j = 0; j < 4; j++) {
            int new_num = num * 10 + prime_digits[j];
            sequence[idx++] = new_num;
            if (idx >= max_n) break;  
        }
    }
}

int main() {
    int T, N;
    scanf("%d", &T);
    int sequence[10000];
    generate_prime_digit_numbers(sequence, 10000);
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        printf("%d\n", sequence[N-1]);
    }

    return 0;
}

