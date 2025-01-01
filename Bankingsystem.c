#include <stdio.h>
#include <string.h>  

int main() {

    int money;
    int deposit;
    int choice1;
    char choice2[10];  

    printf("How much money do you have in your account?\n");
    scanf("%d", &money);

    printf("You have %d in your account\n", money);

    printf("Would you like to deposit money? (yes/no)\n");
    scanf("%s", choice2);  

    if (strcmp(choice2, "no") == 0) {
        printf("No deposit made.\n");
    } else if (strcmp(choice2, "yes") == 0) {
        printf("How much money would you like to deposit?\n");
        scanf("%d", &deposit);
        money = money + deposit;
        printf("You now have %d in your account\n", money);
    } else {
        printf("Invalid choice\n");
    }

    while (1) {
        printf("What would you like to do next?\n");
        printf("1. Withdraw\n");
        printf("2. Deposit\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");

        int choice;
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("How much would you like to withdraw?\n");
                int withdraw;
                scanf("%d", &withdraw);
                if (withdraw > money) {
                    printf("Insufficient funds.\n");
                } else {
                    money = money - withdraw;
                    printf("You now have %d in your account\n", money);
                }
                break;

            case 2:
                printf("How much would you like to deposit?\n");
                scanf("%d", &deposit);
                money = money + deposit;
                printf("You now have %d in your account\n", money);
                break;

            case 3:
                printf("You have %d in your account\n", money);
                break;

            case 4:
                printf("Thank you for using our service\n");
                return 0;  

            default:
                printf("Invalid choice\n");
                break;
        }

        // Check the balance status
        if (money < 0) {
            printf("You are in debt\n");
        } else if (money == 0) {
            printf("You have no money in your account\n");
        } else {
            printf("You have money in your account\n");
        }
    }

    return 0;
}
