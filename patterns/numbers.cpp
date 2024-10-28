#include <bits/stdc++.h>
using namespace std;

void print4(int n){
	for(int i=1; i<=n; i++) {
		//when i is 0 it runs from 0 to 0
		for(int j=1;j<=n-i+1; j++) {
			//printing inner loop increment 
			cout <<j <<"";
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
		print4(n);
	}
	
}
