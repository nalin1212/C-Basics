#include <bits/stdc++.h>
// min function to find minimum of three numbers
using namespace std;
void add(int a, int b, int c) {

        //nested min
        cout << "Minimum_is " << min(a, min(b, c)) << endl; 
        }
        int main() {
            // add two numbers 
            int a;
            int b;
            int c;
            cin >> a >> b >> c;
            add(a, b, c);

            return 0;

        }