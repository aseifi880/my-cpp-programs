#include <iostream>
#include <cmath>
using namespace std;
long int power(int x, unsigned int y)
{	double result = 0;
    for(int i = 0; i < y; i++){
    	result *= x;
	}
}
double toRadians(double angdeg)         //convert to radians from degree
{                                       
    const double PI = 3.14159265358979323846;
    return angdeg / 180.0 * PI;
}
double fact(int x)       //factorial function 
{                           
    if(x == 0 || x == 1)
        return 1;
    else
        return x * fact(x - 1);
}
double mySin(double angles)      //mySin function
{	double sum = 0.0;
    for(int i = 0; i < 9; i++)
    {
        double top = pow(-1, i) * pow(angles, 2 * i + 1);  //calculation for top
        double bottom = fact(2 * i + 1);              //calculation for bottom
        sum = sum + top / bottom;                     //x - x^3/3! + x^5/5! - x^7/7!
    }
    return sum;}
int main()
{double param, result;
    cout << "Enter your angel in degrees :";
    cin >> param;
    result = mySin(toRadians(param)); //This is my sin value
    cout << "Sin value is : " << result << endl;
	cout << "Sin value in round form :" << round(result);
    return 0;}
