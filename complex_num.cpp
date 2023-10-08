#include <bits/stdc++.h>
#include <iostream>     
#include <complex>
#include <math.h>
using namespace std;

#define endl '\n'

int main() {    
  // defines the complex number: (3.0 + 4.0i)
  std::complex<double> mycomplex(3.0, 4.0);
  
  cout << "Real part: " << real(mycomplex) << endl;
  cout << "Imaginary part: " << imag(mycomplex) << endl;
  cout << "The absolute value of " << mycomplex << " is: " << abs(mycomplex) << endl;
  cout << "The argument of " << mycomplex << " is: " << cout << arg(mycomplex) << endl;
  return 0;
}

// Output :-
// Real part: 3
// Imaginary part: 4
// The absolute value of (3,4) is: 5
// The argument of (3,4) is: 0.927295
