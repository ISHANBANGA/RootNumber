#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double r1, r2;
    double a, b, c;
    cout << "Enter the value of a,b and c " << endl;
    cin >> a >> b >> c;
    double determinat = pow(b, 2) - (4 * a * c); // calculating the determinant first and then later checking on if it is less than 0 or greater than 
    double discriminate = -b / (2 * a);

    if (determinat > 0) {
         r1 = ( - b + sqrt(determinat))/ 2 * a;
         r2 = (-b - sqrt(determinat)) / 2 * a;
        cout << "Root 1 = " << r1 << endl << " Root 2 = " << r2 << endl;
    }
    else if(determinat == 0) {
         r1 = r2 = discriminate;
         cout << " Roots are real and equal " << r1 << r2 << endl;
    }
    else {
        double realpart = discriminate;
        double imaginarypart = sqrt(-determinat)/(2 * a);
        cout << " Root 1 is " << realpart << " + "  << imaginarypart << endl;
        cout << " Root 2 is " << realpart << " - " << imaginarypart << endl;
        return 0; // telling it to exit the program directly instead of going outside the curly brace.
    }

    return 0; // can remove this retun type since the return 0 is written in the if and else loop
   // cout << "Enter the quadratic formula" << endl;
}
