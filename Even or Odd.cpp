#include <bits/stdc++.h>

using namespace std;
void number(int a ) { 
        if (a%2==0 ) 
        {//nested min
        cout << "Number_is " << "even"<< endl; 
        }
        else{
            cout << "Number_is " << "odd"<< endl; 
            
        }
}
        int main() {
            // add two numbers 
            int a;
            cin >> a ;
            number(a);

            return 0;

        }