
// 9. Start or Stop
#include <stdio.h>
int main() {
    int input;
    printf("Enter input (1 = Start, others = Stop): ");
    scanf("%d", &input);
    if (input == 1)
        printf("Start\n");
    else
        printf("Stop\n");
    return 0;
}
