#include <stdio.h>

struct Car {
    int carID;
    char model[30];
    float rentalRate;
};
int main() {
    struct Car cars[3];
    int days;
    for(int i = 0; i < 3; i++) {
        printf("Enter ID, Model, and Daily Rate for Car %d: ", i + 1);
        scanf("%d %s %f", &cars[i].carID, cars[i].model, &cars[i].rentalRate);
    }
    printf("\nEnter number of days for rental: ");
    scanf("%d", &days);
    printf("\nRental Details for %d Days\n", days);
    for(int i = 0; i < 3; i++) {
        float totalCost = cars[i].rentalRate * days;
        printf("Car: %s (ID: %d) Total Cost: $%.2f\n", cars[i].model, cars[i].carID, totalCost);
    }
    return 0;
}