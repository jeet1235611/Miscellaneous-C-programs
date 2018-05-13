#include <iostream>
using namespace std;
int selectionSort(int arr[], int n){
	for(int i = 0; i < n; i++){
		int min = arr[i];

		for(int j = i+1; j < n; j++){
			if(arr[j] < arr[i]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	//Printing the values in the arrays.
	for(int i = 0; i < n; i++)
		cout << arr[i] << "\t";
}
int main() {
	int arr[100], n;
	cout << "Enter the size of the array\n";
	cin >> n;

	cout << "Eneter the value in the array\n";
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	selectionSort(arr, n);
}
