#include <iostream>;
#include <math.h>;

using namespace std;

double pointDiff(double x1, double y1, double x2, double y2);
double pointDiff(double x1, double y1, double z1, double x2, double y2, double z2);
double pointDiff(double x1, double y1, double x2, double y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

double pointDiff(double x1, double y1, double z1, double x2, double y2, double z2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2) + pow((z2 - z1), 2));
}
int main() {
    cout << "1)Two-dimensional space: " << endl;
    double a = pointDiff(1.0,1.0,4.0, 4.0);
    double b = pointDiff(4.0,4.0,5.0, 1.0);
    double c = pointDiff(1.0,1.0,5.0, 1.0);
    double P = a + b + c;
    cout << "P of the triangle is: " << P << endl << endl;
    cout << "2)Three-dimensional space: " << endl;
    a = pointDiff(2.0, 1.0, 3.0, 2.0, 0.0,5.0);
    b = pointDiff(2.0, 1.0, 3.0, 5.0, -1.0, 10.0);
    c = pointDiff(5.0, -1.0, 10.0, 2.0, 0.0, 5.0);
    P = a + b + c;
    cout << "P of the triangle is: " << P << endl << endl;
    return 0;
}
