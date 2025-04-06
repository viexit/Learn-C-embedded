/*
    Program to
    manipulate Bits..
*/

#include <stdio.h>
//#include <stdbool.h>
#include <string.h>
#define LEFT_SHIFT "<<"
#define RIGHT_SHIFT ">>"


void displayBits(unsigned int num);
void shiftBits(unsigned int num, unsigned int shift, char direction[10]);


int main(){
    unsigned int num1;
    unsigned int num2;
    unsigned int num3;
    unsigned int nshift;

    int mainchoice;
    char opchoice[10];
    char shchoice[10];

    printf("Welcome to Binary manipulation toolkit\n");
    printf("This program will help you manipulate bits\n");
    printf("1. Display bits and perform Logical Operations (AND,OR,COR,NOT)\n");
    printf("2. Shift bits n (max:31) times left or right\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &mainchoice);

    switch(mainchoice) {
        case 1:
            printf("You have chosen to display bits and perform logical operations\n");
            printf("Enter a number to represent in Binary: ");
            scanf("%u", &num1);
            printf("The binary representation of %d is: \n", num1);
            displayBits(num1);
            printf("Pick another number to represent in Binary: ");
            scanf("%u", &num2);
            printf("The binary representation of %d is: \n", num2);
            displayBits(num2);
            printf("Enter a choice (AND,OR,XOR,NOT):\n");
            scanf("%s", &opchoice);
            if (strcmp(opchoice, "AND") == 0 || strcmp(opchoice, "and") == 0) {
            printf("Result of AND operation of (%u) and (%u):\n", num1, num2);
            displayBits(num1&num2);
            } else if (strcmp(opchoice, "OR") == 0 || strcmp(opchoice, "or") == 0) {
            puts("Result of OR operation:");
            displayBits(num1|num2);
            } else if (strcmp(opchoice, "XOR") == 0 || strcmp(opchoice, "xor") == 0) {
            puts("Result of XOR operation:");
            displayBits(num1^num2);
            } else if (strcmp(opchoice, "NOT") == 0 || strcmp(opchoice, "not") == 0) {
            puts("Result of NOT operation:");
            displayBits(~num1);
            puts("Result of NOT operation:");
            displayBits(~num2);
            } else {
            printf("Invalid choice. Please enter AND, OR, XOR, or NOT.\n");
            }
            break;
        case 2:
            printf("You have chosen to shift bits\n");
            printf("Enter a number to shift: ");
            scanf("%u", &num3);
            printf("Enter the number of bits to shift: ");
            scanf("%u", &nshift);
            printf("Enter the direction to shift (left or right): ");
            scanf("%s", &shchoice);
            
            if (strcmp(shchoice, "left") == 0 || strcmp(shchoice, "LEFT") == 0) {
                strcpy(shchoice, LEFT_SHIFT);
                shiftBits(num3, nshift, shchoice);
            }
            else if (strcmp(shchoice, "right") == 0 || strcmp(shchoice, "RIGHT") == 0) {
                strcpy(shchoice, RIGHT_SHIFT);
                shiftBits(num3, nshift, shchoice);
            } else {
                printf("Invalid choice. Please enter left or right.\n");
            }
            break;
        case 3:
            printf("Exiting the program\n");
            return 0;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
            return 1;
    }
    return 0;
}

void displayBits(unsigned int num) {
    unsigned int Mask = 1 << 31;
    for (unsigned int i = 0; i <= 31; ++i){
        putchar(num & Mask ? '1' : '0');
        Mask >>= 1;
        if (i % 4 == 3) {
            putchar(' ');
        }
    }
    putchar('\n');
}

void shiftBits(unsigned int num, unsigned int shift, char direction[10]) {
    for (int i = 0; i < shift ; i++) {
        if (strcmp(direction, LEFT_SHIFT) == 0) {
            num <<= 1;
        } else if (strcmp(direction, RIGHT_SHIFT) == 0) {
            num >>= 1;
        } else {
            printf("Invalid shift direction.\n");
        }
    }
    printf("Result after shifting %u bits %s: ", shift, direction);
    displayBits(num);
}



    

    

