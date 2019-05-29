// Libraries Included
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std; 
int main ()
{
	// Variables used
	double a, b, c, p;
	double sideA, sideB, sideC;
	double area, perimeter, apothem, circumcenter; 
	//Value of pi for the computation of Interior Angles
	const double pi = 3.14159265359;
    // Output intro for software
	cout << "\tWelcome to Triangle Calculator Software\n";
	//Output Enter Measurements
	cout << "\nPlease enter the measurements of the sides of the triangle. \n\n";
	//Input for the sides of the Triangle
	cout << "Enter value for the 1st side of the Triangle: "; cin >> sideA; 
	cout << "Enter value for the 2nd side of the Triangle: "; cin >> sideB;
	cout << "Enter value for the 3nd side of the Triangle: "; cin >> sideC; 
	//Formula to determine the Interior Angles
	a=((acos((pow(sideB,2)+pow(sideC,2)-pow(sideA,2))/(2*sideB*sideC))*180)/pi);
	b=((acos((pow(sideC,2)+pow(sideA,2)-pow(sideB,2))/(2*sideC*sideA))*180)/pi);
	c=((acos((pow(sideA,2)+pow(sideB,2)-pow(sideC,2))/(2*sideA*sideB))*180)/pi);
	//Shows the computed value of the angle
	cout << "\nA. Interior Angles of the sides of the Triangle \n"; 
	cout << "1st Angle: " << a << "\n";
	cout << "2nd Angle: " << b << "\n";
	cout << "3rd Angle: " << c << "\n";
	//Output Classification of Triangles
	cout <<"\nB. Classification of the Triangle by sides \n"; 
	//If-else statement to determine the Classification of the Triangle by the sides
	if ( sideA==sideB && sideB==sideC)
		cout << "Equilateral Triangle";
	else if (sideA==sideB || sideA==sideC && sideB || sideC)
		cout << "Isosceles Triangle"; 
	else if (sideA!=sideB && sideB!=sideC)
		cout << "Scalene Triangle";
	//Formula for the Perimeter and Area
	perimeter = sideA+sideB+sideC;
	p=perimeter/2;
	area = sqrt(p*((p-sideA)*(p-sideB)*(p-sideC)));
	cout << "\n\nC. Perimeter and Area of the Triangle \n";
	cout << "Perimeter: " << perimeter << endl;
	cout << "Area: " << area << endl;
	cout << "\nD. Classification of the Triangle by Angle \n";
	//If-else statement to determine the classicication of the Triangle by the angle. 
	if (a<90 && b<90 && c<90)
		cout << "Acute Angle \n";
	else if (a==90 || b==90 || c==90)
	    cout << "Right Angle \n";
	else if (a>90 || b>90 || c>90)
		cout << "Obtuse Angle \n";
	//Output Length of Circumcenter and Apothem
	cout << "\nE. Length of the Apothem and Circumcenter"; 
	//Formula for the Apothem and Circumcenter
	apothem = 2*area / perimeter;
	circumcenter = (sideA*sideB*sideC) / sqrt((sideA+sideB+sideC) * (sideA+sideB-sideC) * (sideB+sideC-sideA));
	//Output for Apothem and Circumcenter
	cout << "\nApothem: " << apothem;
	cout << "\nCircumcenter: " << circumcenter << "\n";
	_getch(); 
	return 0; 
}

