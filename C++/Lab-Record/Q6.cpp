
#include<iostream>
using namespace std;

class Fibonacci {
private:
    int n; // Number of terms in the series
public:
    Fibonacci(int terms) : n(terms) {
        generateSeries();
    }

    void generateSeries() {
        int a = 0, b = 1, c;
        cout << "Fibonacci Series(" << n << " terms): ";
        cout << a << " " << b << " ";
        for (int i = 2; i < n; ++i) {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
        cout << endl;
    }
};

int main() {
    int terms;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> terms;
    Fibonacci fib(terms);
    return 0;
}

