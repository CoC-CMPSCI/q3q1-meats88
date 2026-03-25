#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, px, mx;

cout << "give A, B, C:";
cin >> a >> b >> c;
px = (-b + sqrt((b*b) - 4 * a * c)) / (2 * a);
mx = (-b - sqrt((b*b) - 4 * a * c)) / (2 * a);

cout << setprecision(2);
cout << px << " " << mx << endl;









}