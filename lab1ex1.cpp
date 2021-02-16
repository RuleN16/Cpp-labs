/*
Author: Danil Patrakov
Group: СБС-002-О-01 / 2
Task: 1.1
Description: запросить у пользователя начальную скорость V и время полета тела T, чтобы определить угол alpha, под которым тело брошено по отношению к горизонту, используя отношение alpha = arcsin(gT/2V)
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << "This programm will calculate the angle at witch the body is thrown in relation to the horizon.\n"
            "Angle is calculating by formula: alpha = arcsin(gT/2V), so if gT/2V will be more than 1 programm will not be able to perform calculations\n";
    double T;
    double V;

    do
    {
        cout << "Enter the initial flight speed: ";
        cin >> V;
        if (cin.fail())
        {
            cout << "Input error: initial flight speed must be a number.\n";
            cin.clear();
            cin.ignore(32767, '\n');
            fflush(stdin);
        } else 

            if (V <= 0)
            {
                cout << "Input error: initial flight speed cannot be less than zero or be equal zero.\n";
                cin.clear();
                fflush(stdin);
            }
    } while (V <= 0);

    do
    {
        cout << "Enter the body flight time: ";
        cin >> T;
        if (cin.fail())
        {
            cout << "Input error: body flight time must be a number.\n";
            cin.clear();
            cin.ignore(32767, '\n');
            fflush(stdin);
        } else

            if (T <= 0)
            {
                cout << "Input error: body flight time cannot be less then zero or be equal zero.\n";
                cin.clear();
                fflush(stdin);
            }
    } while (T <= 0);
    double gT = 9.8 * T;
    double doubleV = 2.0 * V;
    double alpha = asin((gT / doubleV));
    const double PI = 3.141592653589793;
    double alphaDegrees = (alpha * 180 / PI);
    cout << "The angle is " << alphaDegrees << " degrees.";
    return 0;
}
