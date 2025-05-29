
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double a, b;
    do {
        printf("\n1.Add 2.Sub 3.Mul 4.Div 5.Mod 6.Power 7.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 6) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
        }

        switch (choice) {
            case 1: printf("Result = %.2lf\n", a + b); break;
            case 2: printf("Result = %.2lf\n", a - b); break;
            case 3: printf("Result = %.2lf\n", a * b); break;
            case 4: 
                if (b != 0) printf("Result = %.2lf\n", a / b);
                else printf("Cannot divide by zero.\n");
                break;
            case 5: 
                if ((int)b != 0) printf("Result = %d\n", (int)a % (int)b);
                else printf("Cannot mod by zero.\n");
                break;
            case 6: printf("Result = %.2lf\n", pow(a, b)); break;
        }
    } while (choice != 7);
    return 0;
}
