#include <stdio.h>
#include <stdbool.h>

void step1(int valuePizza, int valueBurger, int valueDosa, int valueIdli);
int step2(int option, int value1, int value2, int value3, int value4);
bool step3(char *decision);

void main(void)
{
    int valuePizza = 180, valueBurger = 100, valueDosa = 120, valueIdli = 50;
    int choose, bill, amount, quantity, total = 0;
    bool decision;

    do
    {
        step1(valuePizza, valueBurger, valueDosa, valueIdli);

        do
        {   
            printf("\nPlease Enter your choose... : ");
            scanf("%d", &choose);
            printf("\n");
            amount = step2(choose, valuePizza, valueBurger, valueDosa, valueIdli);
        } while (amount == 0);
        
        printf("\nEnter the quantity: ");
        scanf("%d", &quantity);

        bill = (quantity * amount);
        total = bill + total;
        printf("Amount: %d\n", bill);

        step3(&decision);
    } while(decision);

    printf("Total Amount is: %d\n", total);
    printf("Thank you, Have a nice day👍\n\n");
    return;
}




void step1(int valuePizza, int valueBurger, int valueDosa, int valueIdli)
{
    printf("\n\n-------------- Menu --------------\n\n");
    printf("1. Pizza\t\tprice = %drs/pcs\n", valuePizza);
    printf("2. Burger\t\tprice = %drs/pcs\n", valueBurger);
    printf("3. Dosa\t\t\tprice = %drs/pcs\n", valueDosa);
    printf("4. Idli\t\t\tprice = %drs/pcs\n", valueIdli);
}

int step2(int option, int value1, int value2, int value3, int value4)
{
    int amount = 0;
        switch(option)
        {
            case 1: printf("You have selected Pizza.");
                    amount = value1;
                    break;
            case 2: printf("You have selected Burger.");
                    amount = value2;
                    break;
            case 3: printf("You have selected Dosa.");
                    amount = value3;
                    break;
            case 4: printf("You have selected Idli.");
                    amount = value4;
                    break;
            default: printf("Invalid selection!");
                    amount = 0;
        }
    return amount;
}

bool step3(char *decision)
{
    char decide;
    printf("Do you want place more order(y / n): ");
    fflush(stdin);
    scanf("%c", &decide);
    *decision = (decide == 'y' || decide == 'Y') ? true : false;
}