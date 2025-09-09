/*
Leo Samonte
Calculator
9/9/2025
Extra: if statements
*/

#include <iostream>
using namespace std;

int main(){
    int numone;
    int numtwo;
    int x;
    float sum;

    cout << "enter a number:" << endl;
    cin >> numone;
    cout << "enter another number" << endl;
    cin >> numtwo;
    cout << "Enter 1 to add, 2 to subtract, 3 to multiply, 4 to divide, 5 to mod, 6 to increment your first number, or 7 to decrement your second number" << endl;
    cin >> x;
    if(x == 1){
    sum = numone + numtwo;
    cout << "the sum is " << sum << endl;
    }
    else if(x == 2){
    sum = numone - numtwo;
    cout << "the difference is " << sum << endl;  
    }
    else if(x == 3){
        sum = numone * numtwo;
        cout << " the product is " << sum << endl;
    }
    else if (x == 4){
        sum = (float)numone / numtwo;
        cout << "The quotient is " << sum << endl;
    }
    else if (x == 5){
        sum = numone % numtwo;
        cout << "The answer is " << sum << endl;
    }
    else if (x == 6){
        sum = ++numone;
        cout << "The answer is " << sum << endl;
    }
    else if (x == 7){
        sum = --numtwo;
        cout << "The answer is " << sum << endl;
    }

}
