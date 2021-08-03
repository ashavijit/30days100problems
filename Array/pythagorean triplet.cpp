#include <bits/stdc++.h> 
using namespace std; 
 

bool checkTriplet(int arr[], int n) 
{ 
	int maxi = 0; 
 
	
	for (int i = 0; i < n; i++) { 
		maxi = max(maxi, arr[i]); 
	} 
 
	
	int hash[maxi + 1] = { 0 }; 
	for (int i = 0; i < n; i++) 
		hash[arr[i]]++; 
 
	
	for (int i = 1; i < maxi + 1; i++) { 
 
		if (hash[i] == 0) 
			continue; 
		for (int j = 1; j < maxi + 1; j++) { 
 
			if ((i == j && hash[i] == 1) || hash[j] == 0) 
				continue; 
 
			int val = sqrt(i * i + j * j); 
 
			if ((val * val) != (i * i + j * j)) 
				continue; 
 
			if (val > maxi) 
				continue; 
			if (hash[val]) { 
				return true; 
			} 
		} 
	} 
	return false; 
} 
int main() 
{ 
    int n;
    cin>>n;
	int arr[n] ;
	for(int  i=0;i<n;i++){
	    cin>>arr[i];
	}
	//int n = sizeof(arr) / sizeof(arr[0]);
	if (checkTriplet(arr, n)) 
		cout << "True"; 
	else
		cout << "False";
}
