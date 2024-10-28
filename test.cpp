#include <bits/stdc++.h>
using namespace std;

//functions are used to use code multiple times
//void -->does not return anything
//return
//paramterized
//non-parameterized


//pass by value
/*
void doSomething(string s) {
    s[0] = 'U';
    cout<< s<<endl;

}


int main() {

    string s= "sumzu";
    doSomething(s);
    cout<< s;
    return 0;
}

*/
//pass by reference
void doSomething(int arr[], int n) {
    arr[0] += 100;
    cout<<"Value inside function :" << arr[0] <<endl;
}

int main() {
    int n=5;
    int arr[n];
    for(int i=0; i<=n; i=i+1){
        cin>> arr[i];
    }
    
    doSomething(arr,n);

    cout<< "Value inside int main: "<< arr[0] << endl;
    return 0;
}