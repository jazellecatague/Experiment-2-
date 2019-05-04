#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	
int rows, columns; 
bool coaster = false;

do 

{
	
cout << "How many rows: "; cin >> rows;
cout << "How many columns: "; cin >> columns;

{
	
for (int a = 0; a < rows; a++) 

{
cout << "\n*";

for (int b = 1; b < columns; b++) 

{
	
cout << "*";

}
}
}

cout << "\n\n";

} while (!coaster); 

_getch();
return 0;
}

