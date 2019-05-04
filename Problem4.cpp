#include <iostream>
#include <conio.h>
using namespace std;

int main() 

{
	
int a, b, c;

cout << "Enter the first number: \n";
cin >> a;

cout << "Enter the second number: \n";
cin >> b;

cout << "Enter the third number: \n";
cin >> c;

cout << "The largest of the three numbers is ";

if ((a>b && b>c) || (a>c && c>b)) 

{
	
cout << a;

}

else if ( (b>a && a>c) || (b>c && c>a) ) 

{
	
cout << b;

}

else if ( (c>a && a>b) || (c>b && b>a) ) 

{
	
cout << c;

}

_getch();

return 0;
}

