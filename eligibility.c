#include <stdio.h>

int main() {
    int customer_id, units;
    char name[50];
    float charge, total, surcharge = 0;

    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter Customer Name: ");
    scanf("%s", name);
    printf("Enter units consumed: ");
    scanf("%d", &units);

    // Calculate charge per unit
    if (units <= 199)
        charge = 1.20;
    else if (units >= 200 && units < 400)
        charge = 1.50;
    else if (units >= 400 && units < 600)
        charge = 1.80;
    else
        charge = 2.00;

    total = units * charge;

    printf("\nElectricity Bill\n");
    printf("Customer IDNO      : %d\n", customer_id);
    printf("Customer Name      : %s\n", name);
    printf("Units Consumed     : %d\n", units);
    printf("Amount Charged @Rs.%.2f per unit : %.2f\n", charge, units * charge);
    printf("Net Amount Paid By the Customer : %.2f\n", total);

    return 0;
}