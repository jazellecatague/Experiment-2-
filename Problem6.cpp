#include <iostream> 
#include <conio.h> 

using namespace std; 

int main() 

{ 

int num1 = 0, num2 = 1, num3, num4 = 2, num5 = 2 + 20; 

cout << "Fibonacci numbers:\n"; 
cout << num1 << "," << num2 << ","; 

for (num4; num4 < num5; num4++) 

{
	
num3 = num1 + num2; 
num1 = num2; 
num2 = num3;

cout << num3 << ","; 

}
 
cout << "\b";
cout << " "; 

_getch(); 
return 0; 
}

