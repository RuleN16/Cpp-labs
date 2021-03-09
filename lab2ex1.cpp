/*
Author: Danil Patrakov
Group: СБС-002-О-01 / 2
Task: 1.2
Description: запросить у пользователя x, чтобы определить его косинус, используя формулу cos(x) = 1 - (x^2)/2! + (x^4)/4! - (x^6)/6!...
*/

#include <iostream>
#include <math.h>

using namespace std;

const int n = 100;

double factorial(double x);
double cos1(double y);

int main()
{
    cout << "This programm will calculate cosine for you.\n";

    double y;

    do {
        cout << "Enter the number you want to get the cosine from: ";
        cin >> y;
        if (cin.fail()) {
            cout << "Input error: you must enter the number.\n";
            cin.clear();
            cin.ignore(32767, '\n');
            fflush(stdin);
        }
        else if (y > 1.0 || y < -1.0) {
            cout << "Input error: number cannot be more than 1 or less than 1.\n";
            cin.clear();
            fflush(stdin);
        }
    } while (y > 1.0 || y < -1.0);

    cout << "The cosine from number " << y << " is " << cos1(y) << "";
    return 0;
}

double factorial(double x)
{
    if (x == 0.0) {
        return 1.0;
    }
    else {
        double result = x * factorial(x - 1.0);
        return result;
    }
}

double cos1(double y)
{
    double ans = 0;
    double temp = 0;

    for (int i = 0; i < n; i++) {
        temp = pow(y, 2.0*i) / factorial(2.0*i);
        ans = ans + temp * pow(-1.0, i);
    }
    return ans;
}