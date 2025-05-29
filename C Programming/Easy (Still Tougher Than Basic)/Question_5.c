// 5. Average marks of n students, count pass/fail
#include <stdio.h>
int main() {
    int n, marks, sum = 0, pass = 0, fail = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Enter marks of student %d: ", i);
        scanf("%d", &marks);
        sum += marks;
        if (marks >= 40) pass++;
        else fail++;
    }
    printf("Average = %.2f\nPassed: %d, Failed: %d\n", (float)sum/n, pass, fail);
    return 0;
}

