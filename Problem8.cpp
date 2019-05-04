#include <iostream> 
#include <conio.h> 

using namespace std;
 
int main() 

{ 

int num1, num2 = 1; 

cout << "Enter a number: "; 
cin >> num1;
 
cout << "Multiplication table of " << num1 << ":" << endl;
 
for (num2; num2 <= 10; num2++) 

{ 

cout << num1 << " * " << num2 << " = " << num2 * num1 << endl; 

} 

_getch(); 
return 0; 
}

