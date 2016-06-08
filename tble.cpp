#include <iostream>
using namespace std;

int main() {
    int n=15;
     cout << "Content-type:text/plain\r\n\r\n";
    cout << "Enter an integer: ";
    cin >> n;
    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n*i << endl;
    }
    
    return 0;
}
