#include <bits/stdc++.h>
using namespace std;

//print the largest number from an array 

int largestelement (vector<int> &arr ,int n){
	
	
	int largest = arr[0];
	for (int i=0; i < n; i++){
	    if (arr[i] > largest){
	        largest =arr[i];
	        
	    }
	    
	    
	}
        return largest ;
        
} 
int main(){
    vector<int> arr ={3 ,2, 1, 7, 4, 5};
    int n =arr.size();
    cout << largestelement(arr,n);
    return 0;
    
}
