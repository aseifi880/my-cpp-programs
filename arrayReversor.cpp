#include <iostream>
using namespace std;
int num,arr[50],i,temp;
void input(){
	cout << "enter n :";
	cin >> num;
	for(i = 0; i < num; i++){
		cout << "enter element number " << i +1 << " : \n";
		cin >> arr[i];
	}
}
void PrintArray(){
	for(i = 0; i < num; ++i){
		cout << arr[i] << ", ";
	}
}
void ReverseArr( int arr[]){
	for( i = 0; i < num; i++){
		temp = arr[i];
		arr[i] = arr[num - 1 -i];
		arr[j - 1 - i] = temp;
	}
}
int main(){
	input();

	ArrRev( arr);
	cout << "the reverse  of this array is :"	;
	print();
	return 0;
}
