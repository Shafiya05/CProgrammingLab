#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    float total = 0, discount, subtotal;

    int burger = 0, pizza = 0, pasta = 0, coke = 0, icecream = 0;

    do {
        printf("\nMenu:\n");
        printf("1. Burger - 120\n");
        printf("2. Pizza - 250\n");
        printf("3. Pasta - 180\n");
        printf("4. Coke - 50\n");
        printf("5. Ice Cream - 90\n");
        printf("6. Generate Bill\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                float price = 120.0;
                int quantity;
                printf("Enter the quantity of burgers: ");
                scanf("%d", &quantity);

                burger += quantity;

                total += price * quantity;
                printf("Added: %.2f\n", price * quantity);
                break;
            }

            case 2: {
                float price = 250.0;
                int quantity;
                printf("Enter the quantity of pizzas: ");
                scanf("%d", &quantity);

                pizza += quantity;

                total += price * quantity;
                printf("Added: %.2f\n", price * quantity);
                break;
            }

            case 3: {
                float price = 180.0;
                int quantity;
                printf("Enter the quantity of pastas: ");
                scanf("%d", &quantity);

                pasta += quantity;

                total += price * quantity;
                printf("Added: %.2f\n", price * quantity);
                break;
            }

            case 4: {
                float price = 50.0;
                int quantity;
                printf("Enter the quantity of cokes: ");
                scanf("%d", &quantity);

                coke += quantity;

                total += price * quantity;
                printf("Added: %.2f\n", price * quantity);
                break;
            }

            case 5: {
                float price = 90.0;
                int quantity;
                printf("Enter the quantity of ice creams: ");
                scanf("%d", &quantity);

                icecream += quantity;

                total += price * quantity;
                printf("Added: %.2f\n", price * quantity);
                break;
            }

            case 6:
                printf("\nGenerating bill...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 6);

    printf("\n==========FINAL BILL ==========\n");

    if (burger > 0)
        printf("Burger (%d)      %.2f\n", burger, burger * 120.0);

    if (pizza > 0)
        printf("Pizza (%d)       %.2f\n", pizza, pizza * 250.0);

    if (pasta > 0)
        printf("Pasta (%d)       %.2f\n", pasta, pasta * 180.0);

    if (coke > 0)
        printf("Coke (%d)        %.2f\n", coke, coke * 50.0);

    if (icecream > 0)
        printf("Ice Cream (%d)   %.2f\n", icecream, icecream * 90.0);

    printf("--------------------------\n");
    printf("Subtotal         %.2f\n", total);

    if (total > 1000)
    {
        discount = total * 10.0 / 100;
        float gst = (total - discount) * 18.0 / 100;
        subtotal = (total - discount) + gst;

        printf("Discount (10%%)   %.2f\n", discount);
        printf("GST (18%%)        %.2f\n", gst);
        printf("TOTAL            %.2f\n", subtotal);
    }
    else if (total > 500)
    {
        discount = total * 5.0 / 100;
        float gst = (total - discount) * 18.0 / 100;
        subtotal = (total - discount) + gst;

        printf("Discount (5%%)    %.2f\n", discount);
        printf("GST (18%%)        %.2f\n", gst);
        printf("TOTAL            %.2f\n", subtotal);
    }
    else
    {
        discount = 0;
        float gst = total * 18.0 / 100;
        subtotal = total + gst;

        printf("Discount         %.2f\n", discount);
        printf("GST (18%%)        %.2f\n", gst);
        printf("TOTAL            %.2f\n", subtotal);
    }

    return 0;
}
