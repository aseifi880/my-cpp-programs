#include <iostream>
#include <cmath>
using namespace std;
// all this little script does is receive inputs of velocity and from user and return the Wind Chill Index
// btw, WCI is used to measure how much heat we lose in a windy day in a specific temp.
void WindColdIndex(float velocity, float temprature){
	float W;
	
	W = 33 - ( (10*sqrt(velocity) - velocity + 10.5) * ( 33 - temprature) / 22);
	cout << "Calculating Wind Coldness Index ... \n";
	cout << " Wind Velocity is : " << velocity << " m/s \n";
	if( temprature <= 10){
		cout << "Wind Temprature is : " << temprature << " centigrades \n";
		cout << "Index valuse is :" << W << endl;}
		else {
			cout << " Index is not defined at given temprature ! \n";
			cout << " temprature value must be below or equal to 10 ." ;
		}
}
int main(){
	float v, t;
	cout << "Enter velocity by meters per second : ";
	cin >> v;
	cout << " Enter temprature by centigrades : " ;
	cin >> t;
	WindColdIndex(v, t);
	return 0;
}
