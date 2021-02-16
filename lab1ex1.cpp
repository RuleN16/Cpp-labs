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
    cout << "This programm will calculate the angle at witch the body is thrown in relation to the horizon.\n";
    double T;
    double V;
    cout << "Enter the initial flight speed: ";
    cin >> V;
    cout << "Enter the body flight time: ";
    cin >> T;
    double alpha = asin((9.8 * T) / (2 * V));
    cout << "The angle is: " << alpha << "";
    return 0;
}
