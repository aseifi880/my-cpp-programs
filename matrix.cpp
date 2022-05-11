#include <iostream>
using namespace std;
void multMatrix(){
	int mult[10][10], A[10][10], B[10][10], rowA, rowB, columnA, columnB, i, k, j;
	cout << "enter rows and columns for matrix A:";
	cin >> rowA >> columnA;
	cout << "enter rows and columns for matrix B:";
	cin >> rowB >> columnB;
	while(columnA != rowB){
		cout << "columns of matrix A should be equal to rows in matrix B";
		cout << "enter rows and columns for matrix A:";
		cin >> rowA >> columnA;
		cout << "enter rows and columns for matrix B:";
		cin >> rowB >> columnB;
	}
	cout << "Enter elements of matrix A :";
	for(i = 0; i < rowA; i++)
	for(j = 0; j < columnA; j++){
		cout << "Enter element A" << i + 1 << j + 1<< " :";
		cin >> A[i][j];}
	for(i = 0; i < rowB; i++)
	for(j = 0; j < columnB; j++){
		cout << "Enter element B" << i + 1 << j + 1<< " :";
		cin >> B[i][j];}
	for(i = 0; i < rowA; ++i)
        for(j = 0; j < columnB; ++j)
        {mult[i][j]=0; }
	for(i = 0; i < rowA; i++)
	for(j = 0; j < columnB; j++)
	for(k = 0; k < columnA; k++){
		mult[i][j] += A[i][k] * B[k][j];
	}
 	cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < rowA; ++i)
    for(j = 0; j < columnB; ++j)
    {
        cout << " " << mult[i][j];
        if(j == columnB - 1)
            cout << endl;}}
int main(){
	multMatrix();
	return 0;
}

