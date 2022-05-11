#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void gravityForce(double m1, double m2, double d){
	
	// function for calculating gravitational force between bodies m1 and m2 in grams
	// with distance of d in centimeters. 
	
    double gravity_force;
    const double gravity_const = 6.693e-8;
    gravity_force = (gravity_const * m1 * m2) / pow(d, 2);
    cout << "Calculating the gravitational force between bodies with masses : " ;
	cout << m1 << " grams and " << m2 << " grams \n";
    cout << " with distance of :" << d << " centimeters \n" ;
    cout << "the Gravitational Force is : " << gravity_force << " Dyne.CM^2/G^2";
    
}
int main(){
    double mass1, mass2, distance, force;
    cout << "enter the mass of first object in grams : ";
    cin >> mass1;
    cout << "enter the mass of second object in grams: ";
    cin >> mass2;
    cout << "enter the distance between two bodies in centimeteres : ";
    cin >> distance;
    gravityForce(mass1, mass2, distance);
    
    return 0;
}
