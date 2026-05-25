#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for{int i =0;i<n; i++}{
	    cin>>arr[i];
	    
	}
// 	pre-compute
    map<int,int>map;
    for{int i =0;i<n;i++}{
        map[arr[i]]++;
    }

	int q;
	cin>>q;
	while (q--){
	    int number;
	    cin>>number;
	    
	   //fetch 
	   cout<<map[number]<<endl;
	   
	   
	}
	return 0;
}
