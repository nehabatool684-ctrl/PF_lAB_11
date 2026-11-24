//#include <stdio.h>
//#include <stdlib.h>
//
///* Recursively sums the digits of n */
//int sumDigits(int n) {
//    if (n == 0) return 0;
//    return (n % 10) + sumDigits(n / 10);
//}
//
///* Repeats digit-summing until a single digit remains */
//int calculateChecksum(int transactionID) {
//    if (transactionID < 0) transactionID = -transactionID;  /* ignore sign */
//
//    if (transactionID < 10)          
//        return transactionID;
//
//    return calculateChecksum(sumDigits(transactionID));  
//}
//
//int main(void) {
//    printf("%d\n", calculateChecksum(9875));  
//    
//    return 0;
//}

#include <stdio.h>

int sumDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}

int calculateChecksum(int n) {
    if (n < 10) return n;
    return calculateChecksum(sumDigits(n));
}

int main() {
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    printf("%d\n", calculateChecksum(n));
    return 0;
}
