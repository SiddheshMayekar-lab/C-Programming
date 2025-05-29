

// 4. Light status
#include <stdio.h>
int main() {
    int light;
    printf("Enter 1 if light is ON, 0 if OFF: ");
    scanf("%d", &light);
    if (light == 1)
        printf("Light ON\n");
    else
        printf("Light OFF\n");
    return 0;
}
