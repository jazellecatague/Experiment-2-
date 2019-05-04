#include <iostream> 
#include <conio.h>
 
using namespace std; 

int main() 

{
	
int ConsumedGallons; 
float PreviousMonth, TotalCost; 
const float WaterDemandCharge = 35, ConsumptionCharge = 1.10; 

cout << "Enter unpaid amount from the previous month: \n";
cin >> PreviousMonth; 

cout << "Enter gallons consumed in the present month: \n"; 
cin >> ConsumedGallons;

if (PreviousMonth < 0 || ConsumedGallons < 0 ) 
cout << "\nInvalid amount!" << endl; 

else if (PreviousMonth > 0) 

{
 
TotalCost = WaterDemandCharge + (ConsumptionCharge * ConsumedGallons) + PreviousMonth + 20; 
cout << "\nYour water bill costs: P" << TotalCost << endl; 

} 

else 

{ 

TotalCost = WaterDemandCharge + (ConsumptionCharge * ConsumedGallons); 
cout << "\nYour water bill costs: P" << TotalCost << endl; 

} 

_getch(); 
return 0; 
}

