#include <iostream> 
#include <conio.h> 

using namespace std; 

int main() 

{ 

bool coaster = false; 

do
 
{ 

int num1, num3 = 0;

cout << "Enter a number: "; 
cin >> num1;

if (num1 > 0)

{ 

for (int num2 = 1; num2 <= num1; num2++) 

{ 

num3 += num2; 
 
} 

cout << "The sum of all whole numbers from 1 to " << num1 << " is " << num3 << "." << endl; 

} 

else 

{ 

cout << "Thank you!" << endl; 

break; 

} 

} while (!coaster); 

_getch(); 
return 0;
}

