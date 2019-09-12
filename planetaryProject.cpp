// Planetary Project: Enter height of the dropped object and the corresponding gravitational constant to determine how long it will take to fall. 

#include<iostream>
#include<math.h>
using namespace std;

// Acceleration due to gravity constants

// gravEarth  = 9.81;
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


int main()
{
    double height;
    double accel;
    
    cout << "Enter the height of the object: ";
    cin >> height;
    cout << "Enter the acceleration due to gravity: ";
    cin >> accel;
    
    
    fallCalculator(height, accel);
    
    
    return 0;
    
}