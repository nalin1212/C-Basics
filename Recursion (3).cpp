#include <bits/stdc++.h>
using namespace std;
void play(int i, int n){
    if (i<1)
    return;
    
    play(i-1, n);
    cout<<i<<" ";
    
}
int main() {
	// Name N times usung Recursion
int n;
cin>>n;
play (n,n);
}
