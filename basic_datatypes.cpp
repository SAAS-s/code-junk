#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int integer;
    long long h;
    char character;
    float floatnumber;
    double doublenum;
    int n;
    cin>>integer;
    cin>> h;
    cin>>character;
    cin>>floatnumber;
    cin>>doublenum;
    
    cout  << integer<< endl;
    cout  << h << endl;
    cout  << character<< endl;
    cout  << floatnumber<< endl;
    cout  << fixed <<setprecision(9)<<doublenum<<endl;

    return 0;
} 
