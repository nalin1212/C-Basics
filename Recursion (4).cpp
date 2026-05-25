#include <bits/stdc++.h>
using namespace std;
void play(int n, int sum){
    if (n<1) {
    cout << sum;
    
    return; }
    
    play(n-1, sum+n);
    
    
}
int main() {
	// Name N times usung Recursion
int n;
cin>>n;
play (n,0);
}