#include <bits/stdc++.h>
using namespace std;
void play(int i, int n){
    if (i>n)
    return;
    cout<<"Chutiya";
    play(i+1, n);
    
}
int main() {
	// Name N times usung Recursion
int n;
cin>>n;
play (1,n);
}
