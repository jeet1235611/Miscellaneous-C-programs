#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int row = 1, nst = n/2, nsp = 1;;
	while(row <= n){
		
		//stars
		for(int i = 1; i <= nst; i++){
			cout << "*";
		}

		//spaces
		for(int i = 1; i <= nsp; i++){
			cout << " ";
		}

		//stars
		for(int i = 1; i <= nst; i++){
			cout << "*";
		}

		if(row <= n/2){
			nst = nst - 1;
			nsp = nsp + 2;
		}

		else {
			nst = nst + 1;
			nsp = nsp - 2;
		}
		
		cout << endl;
	
	
	row++;
	}
}
