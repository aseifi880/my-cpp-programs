#include <iostream>
#include <string>
using namespace std;
void numberSearcher( char digit, string Number){
	int similars = 0;
	for(int i = 0; i < Number.length(); i++){
		if( Number[i] == digit){
			++similars;
		}
	}
	cout << " The number of similar digits in this number is : " << similars;
}
int main(){
	string Number;
	char digit;
	cout << " the digit you're looking for : ";
	cin >> digit;
	cout << " the number to be searched in : " ;
	cin >> Number;
	cout << numberSearcher( digit, Number);
	
	return 0;
	
}
