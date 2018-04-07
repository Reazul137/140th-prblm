#include<iostream>
using namespace std;
int main()
{
    float kmh, mph;

    cout << "\n\n Convert Kilometer per hour to miles per hour : \n";
    cout << "-----------------------------------------------------\n";

    cout << " Input the distance in kilometer : ";
    cin >> kmh;

    mph = (kmh * 0.6213712);
    cout <<"The " << kmh <<"km/h means "<<mph<<" Miles per hour"<< endl;
    return 0;
}
