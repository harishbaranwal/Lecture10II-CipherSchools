#include <iostream>
using namespace std;

int sum(int a, int b){
    int c;
    c= a+b;
    a=500;
    cout << "the value of c is: "<< c << endl;
    return c;
}

//void swap(int a, int b){
void swap(int &a, int &b){ // passing by reference.
     int c;

     c=a;
     a=b;
     b=c;

     cout << "the values of a and b after swapping inside the function are: " << a << " " << b << endl;
    return;
}

int fun( int &a, int b){
    a=99999;
    b=99999;

    cout << "the values of a and b inside fun function are: "<< a << " " <<b << endl;
    return 0;
}

int main(){

    int a,b;
    int c =75;

    a=4;
    b=6;
    cout << "the values of a and b before passing to fun function are: "<< a << " " <<b << endl;
    // int d;
    // d= sum(a,b);

    // // cout << "the sum is: " << d << " the value of a is: " << a <<endl;
    // cout << "the value of c is: "<< c << endl; // gives a garbage value till it is assigned.

    //swap(a,b);
    fun(a,b);

    cout << "the values of a and b after passing to the fun function are: " << a << " " << b << endl;

    return 0;
}
