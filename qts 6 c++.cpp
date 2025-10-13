#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double r, area;
    cin >> r;
    area = M_PI * r * r;
    cout << fixed << setprecision(3);
    cout << "AREA = " << area << endl;
    return 0;
}
