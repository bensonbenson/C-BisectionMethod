//  bisection-method
//
//  Created by Benson Tran on 8/27/18.
//  Copyright © 2018 Benson Tran. All rights reserved.
//  MATH 5336 - Applied Numerical Methods
//  Problem Set 1, Question 3
//  Applies the bisection method to approximate sqrt(3) to the 10^-5 precision.

#include <iostream>
#include <limits>
using namespace std;

double e = 0.00001; // Epsilon, our error term
double c; // Placeholder 'midpoint' variable
int iterationCount = 0; // Iteration counter

// Our example function is x^2 - 3 for approximating sqrt(3)
double func(double x) {
    return (x * x) - 3;
}

// Function to do bisection method where a and b are the endpoints
void bisection(double a, double b){
    if (func(a) * func(b) >= 0) {
        cout << "Your endpoints are incorrect." << endl;
        return;
    }
    
    // Iterate while the endpoint differences are still greater than epsilon
    while((b-a) >= e) {
        iterationCount++;
        c = (a+b)/2; // Set c to midpoint
        
        // If midpoint is exact root, return it
        if (func(c) == 0.0) {
            cout << "Iteration " << iterationCount << "root found, root = " << c << endl;
            break;
        }
        // Set new right endpoint to c if f(c) * f(a) < 0
        else if (func(c) * func(a) < 0) {
            cout << "Iteration " << iterationCount << ", approximate root = " << c << endl;
            b = c;
        }
        // else, set new left endpoint to c if f(c) * f(a) > 0
        else {
            cout << "Iteration " << iterationCount << ", approximate root = " << c << endl;
            a = c;
        }
    }
}

// Inputs example function x^2 - 3, at endpoints [1,2] and runs bisection method
int main(int argc, const char * argv[]) {
    double a = 1;
    double b = 2;
    
    bisection(a, b);
    
    cout << "\n";
    cout << "The approximation to the " << e << " precision is: " << c << " with " << iterationCount << " iterations." << endl;
    
    return 0;
}
