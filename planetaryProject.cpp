// Planetary Project: Enter height of the dropped object and the corresponding gravitational constant to determine how long it will take to fall. 

#include<iostream>
#include<math.h>
using namespace std;

// Acceleration due to gravity constants

// const double gravEarth  = 9.81;
// gravSun  = 274.13;
// gravMercury  = 3.59;
// gravVenus  = 8.87;
// gravMoon  = 1.62;
// gravMars  = 3.77;
// gravJupiter  = 25.95;
// gravSaturn  = 11.08;
// gravUranus  = 10.67;
// gravNeptune  = 14.07;
// gravPluto  = 0.42;

// Calculator Function

double fallCalculator(float distance, float gConstant) // Meters and m/s^2
{
    double insideArgu = ((distance) / ((gConstant) * (0.5)));
    double fallTime = sqrt(insideArgu);
    
    cout << "The fall time was " << fallTime << " seconds." << endl;
    
    return fallTime; 
    
}

void printMenu() // Menu of choices. 
{
	cout<<"Enter the planet of the object: "<<endl;
	cout<<"=== menu ==="<<endl;
	cout<<"1. Sun"<<endl;
	cout<<"2. Mercury"<<endl;
	cout<<"3. Venus"<<endl;
	cout<<"4. Moon"<<endl;
	cout<<"5. Mars"<<endl;
	cout<<"6. Jupiter"<<endl;
	cout<<"7. Saturn"<<endl;
	cout<<"8. Uranus"<<endl;
	cout<<"9. Neptune"<<endl;
	cout<<"10. Pluto"<<endl;
}




int main() // To call the functions
{
    double height;
    double accel;
    int planet;
    
    printMenu();
    cin >> planet;
    
    switch (planet) // To correspond the selected planet with the proper gravitational constant. 
    {
        case 1:
            accel = 274.13;
            break;
        case 2:
            accel = 3.59;
            break;
        case 3:
            accel = 8.87;
            break;
        case 4:
            accel = 1.62;
            break;
        case 5:
            accel = 3.77;
            break;
        case 6:
            accel = 25.95;
            break;
        case 7:
            accel = 11.08;
            break;
        case 8:
            accel = 10.67;
            break;
        case 9:
            accel = 14.07;
            break;
        case 10:
            accel = 0.42;
            break;
    }
    
    
    
    cout << "Enter the height of the object in meters: ";
    cin >> height;
    
    
    fallCalculator(height, accel);
    
    
    return 0;
    
}
