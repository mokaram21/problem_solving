#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    cout << fixed << setprecision(9);
    double R;
    double py = 3.141592653;
    cin >> R;
    double area = py * R * R;
    cout << area << endl;
    return 0;
}