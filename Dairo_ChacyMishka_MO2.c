#include <stdio.h>

int main() {
    int distance, TravelTime, FuelEfficiency, packages;
    float FuelPrice, DriverRate, AdditionalExpenses;
    float FuelConsumed, FuelCost,TravelHours;
    float DriverPayment, TotalCost, CostPerPackage, AverageSpeed;

    printf("Enter total distance (km): ");
    scanf("%d", &distance);

    printf("Enter total travel time (minutes): ");
    scanf("%d", &TravelTime);

    printf("Enter fuel efficiency (km/L): ");
    scanf("%d", &FuelEfficiency);

    printf("Enter fuel price per liter: ");
    scanf("%f", &FuelPrice);

    printf("Enter number of packages: ");
    scanf("%d", &packages);

    printf("Enter driver payment per hour: ");
    scanf("%f", &DriverRate);

    printf("Enter additional expenses: ");
    scanf("%f", &AdditionalExpenses);

    FuelConsumed = (float) distance / FuelEfficiency;
    FuelCost = FuelConsumed * FuelPrice;
    TravelHours = (float) TravelTime / 60;
    DriverPayment = TravelHours * DriverRate;
    TotalCost = FuelCost + DriverPayment + AdditionalExpenses;
    CostPerPackage = TotalCost / (float) packages;
    AverageSpeed = distance / TravelHours;


    printf("=====================================================");
    printf("         DELIVERY TRIP REPORT\n");
    printf("=====================================================");
    printf("Total Distance    : %d km\n", distance);
    printf("Travel Time       : %.2f hours\n", TravelHours);
    printf("Fuel Consumed     : %.2f liters\n", FuelConsumed);
    printf("Fuel Cost         : PHP %.2f\n", FuelCost);
    printf("Driver Payment    : PHP %.2f\n", DriverPayment);
    printf("Additional Expenses: PHP %.2f\n", AdditionalExpenses);
    printf("----------------------------------------\n");
    printf("Total Delivery Cost: PHP %.2f\n", TotalCost);
    printf("Cost per Package  : PHP %.2f\n", CostPerPackage);
    printf("Average Speed     : %.2f km/h\n", AverageSpeed);
    printf("=====================================================");

    return 0;
}
