#include <stdio.h>
#define TOLL_RATE 50

void processVehicle(char vehicleType[]) {
	
    static int totalVehicles = 0;
    static int totalRevenue = 0;
    totalVehicles++;
    totalRevenue += TOLL_RATE;

    printf("\nVehicle Type: %s\n", vehicleType);
    printf("Toll Charged: %d PKR\n", TOLL_RATE);
    printf("Total Vehicles: %d\n", totalVehicles);
    printf("Total Revenue: %d PKR\n", totalRevenue);
}

int main() {

    printf("===== HIGHWAY TOLL BOOTH =====\n");
    processVehicle("Car");
    processVehicle("Bus");
    processVehicle("Truck");
    processVehicle("Car");
    processVehicle("Motorcycle");

    printf("\n===== FINAL TOLL COLLECTION REPORT =====\n");

    processVehicle("Final Report");

    return 0;
}


