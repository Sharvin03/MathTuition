#include<iostream>
using namespace std;


int main(){
	int rows, columns;
	cout<<"Enter the number of Rows: "; cin>>rows;
	cout<<"Enter the number of Columns: "; cin>>columns;
	int trialArray[rows][columns];
	for (int i = 0; i<rows; i++){
		for(int j = 0; j<columns; j++){
			cout<<"Enter the Value for Row and Column: "; 
			cin>>trialArray[i][j];
		}
	}
	
	for (int k = 0; k<rows; k++){
		for(int l = 0; l<columns; l++){
			cout<<trialArray[k][l]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;
}
