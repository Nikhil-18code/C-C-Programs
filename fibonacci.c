// 
    // return 0;
//}//program to find fibonacci upto a certain term
// #include <stdio.h>
// int main() {
//     int i, n, t1 = 0, t2 = 1, nT;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci Series: ");

//     for (i = 1; i <= n; ++i) {
//         printf("%d, ", t1);
//         nT = t1 + t2;
//         t1 = t2;
//         t2 = nT;
//     }

//upto a certain number
#include <stdio.h>
int main() {
    int t1 = 0, t2 = 1, nextTerm = 0, n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // displays the first two terms which is always 0 and 1
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    nextTerm = t1 + t2;

    while (nextTerm <= n) {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}