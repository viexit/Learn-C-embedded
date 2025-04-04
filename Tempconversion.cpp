/*
    Convert F to C and C to F.
*/
#include <stdio.h>

int main()
{
    const float FREEZING_PT = 32.0;
    const float THE_RATIO1 = 5.0 / 9.0;
    const float THE_RATIO2 = 9.0 / 5.0;
    float fahrenheit;
    float celsius;
    char choice;

    printf("Convert Fahrenheit to Celsius (C)\n or Celsius to Fahrenheit (F)\n");
    scanf(" %c", &choice);
    
    if (choice == 'C' || choice == 'c')
        {
            printf("Enter the temperature in Fahrenheit: ");
            scanf("%f", &fahrenheit);
            celsius = THE_RATIO1 * (fahrenheit - FREEZING_PT);
            printf("The temperature in Celsius is: %.2f\n", celsius);
        }
    else if (choice == 'F' || choice == 'f')
        {
            printf("Enter the temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (THE_RATIO2 * celsius) + FREEZING_PT;
            printf("The temperature in Fahrenheit is: %.2f\n", fahrenheit);
        }
    else
        {
            printf("Invalid choice. Please enter 'F' or 'C'.\n");
        }
    return 0;
}