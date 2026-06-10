#include <stdio.h>
#include <math.h>

int main() {

    int choices, num, original;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    do {
        printf("\nMenu:\n");
        printf("1. Sum of the digits of a number\n");
        printf("2. Sum of the odd digits in the number\n");
        printf("3. Sum of the even digits in the number\n");
        printf("4. Reverse of the number\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choices);

        switch(choices) {
            case 1: {
                int sum = 0;
               
                while (num > 0) {
                    sum += num % 10;
                    num /= 10;
                }
                printf("Sum of digits: %d\n", sum);
                num = original;
                break;
            }
            case 2: {
                int  sum = 0;
               
                while (num > 0) {
                    if ((num % 10) % 2 != 0) {
                        sum += num % 10;
                    }
                    num /= 10;
                }
                printf("Sum of odd digits: %d\n", sum);
                num = original;
                break;
            }
            case 3: {
                int sum = 0;
                
                while (num > 0) {
                    if ((num % 10) % 2 == 0) {
                        sum += num % 10;
                    }
                    num /= 10;
                }
                printf("Sum of even digits: %d\n", sum);
                num = original;
                break;
            }
            case 4: {
                int  rev = 0;
                
                while (num > 0) {
                    rev = rev * 10 + num % 10;
                    num /= 10;
                }
                printf("Reverse of the number: %d\n", rev);
                num = original;
                break;
            }
            case 5: {
                printf("Exiting...\n");
                break;
            }
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choices != 5);  // ? loop condition was completely missing

    return 0;
}
