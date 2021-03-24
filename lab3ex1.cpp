/*
Author: Danil Patrakov
Group: СБС-002-О-01 / 2
Task: 3.1
Description: запросить у пользователя компоненты вектора, вычислить модуль вектора по формуле sqrt(a1^2 + a2^2 + a3^2).
*/

#include <iostream>
#include <math.h>

using namespace std;

double cin_with_number_check();

int main()
{
	cout << "This programm will calculate the modulus of the vector for you.\n";

	cout << "Enter the components of the vector:\n";
	double a1 = cin_with_number_check();
	double a2 = cin_with_number_check();
	double a3 = cin_with_number_check();

    double modulus = sqrt(pow(a1, 2) + pow(a2, 2) + pow(a3, 2));
    
    cout << "The modulus of the vector is: " << modulus << ".";

   return 0;
}

double cin_with_number_check()
{
    int check;
    double component;

    do {
        cout << "Enter the component: ";
        cin >> component;
        if (cin.fail()) {
            cout << "Input error: you must enter the number.\n";
            check = 0;
            cin.clear();
            cin.ignore(32767, '\n');
            fflush(stdin);
        }
        else check = 1;
    } while (check == 0);

    return component;
}