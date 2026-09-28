#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    double num, base, exponent;

    printf("Enter your choice(1=Square Root, 2=Power, 3=Absolute Value, 4=Floor, 5=Ceiling): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter a number: ");
        scanf("%lf", &num);

        if (num >= 0)
        {
            printf("Square Root = %.2lf", sqrt(num));
        }
        else
        {
            printf("Invalid input: Square root cannot be calculated for a negative number.");
        }
        break;

    case 2:
        printf("Enter base: ");
        scanf("%lf", &base);

        printf("Enter exponent: ");
        scanf("%lf", &exponent);

        printf("Power = %.2lf", pow(base, exponent));
        break;

    case 3:
        printf("Enter a number: ");
        scanf("%lf", &num);

        printf("Absolute Value = %.2lf", fabs(num));
        break;

    case 4:
        printf("Enter a number: ");
        scanf("%lf", &num);

        printf("Floor = %.2lf", floor(num));
        break;

    case 5:
        printf("Enter a number: ");
        scanf("%lf", &num);

        printf("Ceiling = %.2lf", ceil(num));
        break;
    }

}