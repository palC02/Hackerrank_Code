//Complete the calculate_the_maximum function in the editor below.
//calculate_the_maximum has the following parameters:
//int n: the highest number to consider
//int k: the result of a comparison must be lower than this number to be considered
//Prints
//Print the maximum values for the and, or and xor comparisons, each on a separate line.

**PROBLEM**
//---> In this challenge, you will use logical bitwise operators. 
//All data is stored in its binary representation. The logical operators, and C language, use  to represent true and  to represent false. 
// The logical operators compare bits in two numbers and return true or false,  or , for each bit compared.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
 int max_and = 0, max_or = 0, max_xor = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int temp_and = i & j;
            int temp_or = i | j;
            int temp_xor = i ^ j;
            if (temp_and > max_and && temp_and < k) {
                max_and = temp_and;
            }
            if (temp_or > max_or && temp_or < k) {
                max_or = temp_or;
            }
            if (temp_xor > max_xor && temp_xor < k) {
                max_xor = temp_xor;
            }
        }
    }
    printf("%d\n%d\n%d", max_and, max_or, max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
