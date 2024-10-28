#include <bits/stdc++.h>
using namespace std;

void print7(int n){
	for(int i=0; i<n; i++) {
		//space
		for(int j=0; j<n-i-1;j++){
			cout<<" ";
		}
		//star
		for(int j=0; j<2*i+1;j++){
			cout<<"*";
		}

		//space
		for(int j=0; j<n-i-1;j++){
			cout<<" ";
		}

		cout << endl;
	}
}

// int main() {
// 	int n;
// 	cin >> n;
// 	print1(n);
// }

// for test cases in coding rounds
int main() {
	int t;
	cin >> t;
	for(int i=0; i<t; i++){
		// #inside this code block they 
		// take n and call the function!
		int n;
		cin >> n;
		print7(n);
	}
	
}
