#include <iostream> 
#include <conio.h>
using namespace std; 

int main() 

{ 

char SubscriptionPackage;
float HoursConsumed, TotalAmountDue; 
bool payUp = true; 
 
do

{
 
cout << "Which package have you purchased?\n "; 
cin >> SubscriptionPackage; 
cout << "How many hours have been used?\n "; 
cin >> HoursConsumed; 

if ((SubscriptionPackage != 'A' && SubscriptionPackage != 'a' && SubscriptionPackage != 'B' && SubscriptionPackage != 'b' && SubscriptionPackage != 'C' && SubscriptionPackage != 'c') || HoursConsumed < 0) 

{ 

cout << "\nInvalid input! \n\n"; 

break; 
 
} 
 
{ 

switch(SubscriptionPackage)
 
{ 
case 'A': 
case 'a':
	
if (HoursConsumed < 10) 
TotalAmountDue = 995; 

else 
TotalAmountDue = 995 + (HoursConsumed - 10) * 20; 

 break; 
 
case 'B': 
case 'b': 

if (HoursConsumed < 20) 
TotalAmountDue = 1495; 

else 
TotalAmountDue = 1495 + (HoursConsumed - 20) * 10; 

case 'C': 
case 'c': 

TotalAmountDue = 1995;  

break;
 
} 

cout << "\nTotal amount due: P" << TotalAmountDue << endl; 


} 

} while (!payUp); 

_getch(); 
return 0;
 }

