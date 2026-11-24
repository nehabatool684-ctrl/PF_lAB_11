
#include <stdio.h>

struct Product {
    int productID;
    char name[50];
    char category[30];
    float price;
    int stockQuantity;
};

void displayProductDetails(struct Product p) {
    float discount = p.price * 0.05;
    float finalPrice = p.price - discount;

    printf("\n----- Product Details -----\n");
    printf("Product ID: %d\n", p.productID);
    printf("Product Name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Original Price: Rs. %.2f\n", p.price);
    printf("Available Stock: %d\n", p.stockQuantity);
    printf("Discount (5%%): Rs. %.2f\n", discount);
    printf("Final Price: Rs. %.2f\n", finalPrice);
}

int main() {
        struct Product p1 = {101,"Laptop","Electronics",100000.00,15};
		displayProductDetails(p1);

    return 0;
}

