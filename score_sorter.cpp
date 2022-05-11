#include <iostream>
using namespace std;
int main(){
	int id[100], temp1, number;
	float score[100], temp2;
	cout << "enter number of students :";
	cin >> number;
	for(int i = 0; i < number; i++){
		cout << "Enter Student id and score :";
		cin >> id[i] >> score[i];
	}
	for(int i = 0; i < number ; i++)
	for(int j = i + 1; j < number - 1; j++){
		if(score[i] > score[j]){
			temp1 = score[i];
			temp2 = id[i];
			score[i] = score[j];
			score[j] = temp1;
			id[i] = id[j];
			id[j] = temp2;
		}
		
	}
	cout << "second highest is :\n";
	cout << id[number - 2] << '\t' << score[number - 2];
	return 0;
}
