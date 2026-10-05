#include<bits/stdc++.h>
 using namespace std;

 class Complex{

    public:

    int real; // To store real part of complex number

    int imaginary; // To store imaginary part of complex number
    
    Complex()
    {

        // Initial  value are zero

        real = 0;
        imaginary = 0;

    }
    Complex( int r, int i){

        real =r; // r is initialized during object creation 

        imaginary = i; // i is initialized during object creation 
    }
    Complex addComplexNumber( Complex c1, Complex c2)
    {
        Complex res; // result object of complex class
        // adding real part of Complex numbers

        res.real = c1.real+ c2.real;

        // adding imaginary part of Complex numbers

        res.imaginary = c1.imaginary+ c2.imaginary;

        //retunring the sum

        return res;

    }
 };

 // Main Class 

 int main(){

    // first complex  number 
    Complex c1( 4,5);

    // printing first Complex number 
    cout << " Complex number1:" << c1.real

    << "+i " << c1.imaginary << endl;

    // second complex number 

    Complex c2(8,9);

    // printing second complex number 

    cout << " Complex number 2:" << c2.real
    << "+i"<< c2.imaginary << endl;

    // for storing the sum

    Complex c3;

    // calling addComplexNumber ()method

    c3 = c3.addComplexNumber(c1,c2);

    // printing the sum
    cout << " sum of complex number" << c3.real <<"+i"<< c3. imaginary << endl;
    //  Test for second input 
    // First Complex number 

    Complex A(2,7);

    // printing first complex number 

    cout << " Complex number 1:" << A.real << " +i" << A.imaginary << endl;
      // second complex number 

      Complex B(10,6);

      // printing second complex number

      cout << " Complex number 2:" << B.real <<"+i" << B.imaginary  << endl;
      // for storing the sum
      Complex c;

      // calling addComplexNumber() metod 
      c = c.addComplexNumber(A,B);
      // printing the sum 
      cout << " Sum of complex number:" << c.real << "+i" << c.imaginary;


 }