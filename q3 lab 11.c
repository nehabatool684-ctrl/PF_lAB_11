#include <stdio.h>
struct Item {
    int ID;
    char Name[50];
    int Quantity;
    float UnitPrice;
};
int main() {
    struct Item items[5];

    float totalValue = 0;
    int searchID, found = 0;

    printf("Enter Details of 5 Warehouse Items:\n");

    for (int i = 0; i < 5; i++) {

        printf("\nEnter details for Item %d:\n", i + 1);

        printf("Enter Item ID: ");
        scanf("%d", &items[i].ID);

        printf("Enter Item Name: ");
        scanf(" %49[^\n]", items[i].Name);

        printf("Enter Quantity: ");
        scanf("%d", &items[i].Quantity);

        printf("Enter Unit Price: ");
        scanf("%f", &items[i].UnitPrice);
        
        totalValue += items[i].Quantity * items[i].UnitPrice;
    }

    printf("\n================================\n");
    printf("Total Warehouse Inventory Value: Rs. %.2f\n", totalValue);

    printf("\nEnter Item ID to Search: ");
    scanf("%d", &searchID);

    for (int i = 0; i < 5; i++) {
        if (items[i].ID == searchID) {
            found = 1;
			printf("\n----- Item Record Found -----\n");
            printf("Item ID: %d\n", items[i].ID);
            printf("Item Name: %s\n", items[i].Name);
            printf("Quantity: %d\n", items[i].Quantity);
            printf("Unit Price: Rs. %.2f\n", items[i].UnitPrice);
            printf("Total Item Value: Rs. %.2f\n",
                   items[i].Quantity * items[i].UnitPrice);

            break;
			   }}
    if (found == 0) {
        printf("\nItem with ID %d not found!\n", searchID);
    }
}

