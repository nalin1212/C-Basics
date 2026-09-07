#include <bits/stdc++.h>

using namespace std;
//  prime number
void number(int a ) { 
        if (a == 1 )          
        { 
        cout << "Number_is " << " not prime"<< endl; 
        }
        else if(a%a==0 & a/1==a){
            cout << "Number_is " << " prime "<< endl; 
            
        }
        else {
            cout << "Number_is " << " not prime"<< endl; 
            
        }
}
        int main() {
            // add two numbers 
            int a;
            cin >> a ;
            number(a);

            return 0;

        }