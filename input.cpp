//header file that allows us to display output
#include <iostream>
#include <string>
/**cout object is defined inside the std namespace. 
To use std namespace, we used the using namespace std; statement
IF we dont include the using namespace std; statement, we need to 
use the std::cout instead of cout.
This is the preferred method.*/
using namespace std;


/**Every C program starts with the main() function.
The code execution begins from the start of the main() function.*/

int main(){
    //cout is an object that print the string inside quotation marks. 
    //IT is followed by the << operator
    cout<<"hello world";
    cout<<"hello world";
    cout<<"hello world";

    /**return 0 is the exit status of the main() function. 
    The program ends with this statement, however, 
    this statement is not mandatory.*/
}

/**
#include <iostream>
using namespace std;

int main(){
    int num1=50;
    double num2= 3435.354;
    char ch= 'A';

    the endl manipulator is used to insert a new line.
    << operator can be usedmore than once if we want
    to print different variables, strings and so on in 
    a single statement. --> cout<<"character:"<<ch<<endl;
    cout<< num1 << endl;
    cout <<num2 << endl;
    cout <<"character:" << char << endl;
    return 0;
}
*/