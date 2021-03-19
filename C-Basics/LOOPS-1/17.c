#include <stdio.h>

int main() {
    int a, temp=0, remain;
    printf("enter number= ");
    scanf("%d", &a);
    while (a!= 0) {
        remain = a % 10;
        temp = temp* 10 + remain; // temp * 10 - each digit moved to left
        a = a/10;
    }
    printf("Reversed number= %d", temp);
    return 0;
}
