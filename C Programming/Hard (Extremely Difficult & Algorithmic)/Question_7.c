#include <stdio.h>

int main() {
    int n, last, count = 1, max = 1, curr;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter first number: ");
    scanf("%d", &last);

    for (int i = 1; i < n; i++) {
        scanf("%d", &curr);
        if (curr > last)
            count++;
        else
            count = 1;
        if (count > max)
            max = count;
        last = curr;
    }
    printf("Longest increasing subsequence length: %d\n", max);
    return 0;
}
