#include <stdio.h>

struct item {
    char item_name[50];
    int quantity;
    float price;
    float amount;
};
void calculate_amount(struct item* itm) {
    printf("Item : %s\n", itm->item_name);
    itm->amount = itm->quantity * itm->price;
    printf("Amount = %.2f\n", itm->amount);
}
int main() {
    struct item x;
    printf("Enter item name: ");
    scanf("%s", x.item_name);
    printf("Enter quantity: ");
    scanf("%d", &x.quantity);
    printf("Enter price: ");
    scanf("%f", &x.price);
    calculate_amount(&x);
    return 0;
}
