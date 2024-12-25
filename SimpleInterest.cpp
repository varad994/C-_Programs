
#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, interest;
    cout << "Enter principal, rate, and time: ";
    cin >> principal >> rate >> time;

    interest = (principal * rate * time) / 100;
    cout << "Simple Interest: " << interest << endl;

    return 0;
}
