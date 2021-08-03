#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
using namespace std; 
  

int myCompare(string X, string Y) 
{ 
    
    string XY = X.append(Y); 
  
    
    string YX = Y.append(X); 
  
    
    return XY.compare(YX) > 0 ? 1: 0; 
} 
{ 
    sort(arr.begin(), arr.end(), myCompare); 
  
    for (int i=0; i < arr.size() ; i++ ) 
        cout << arr[i]; 
} 
  
int main() 
{ 
    vector<string> arr;
    int n;
    string m;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>m;
        arr.push_back(m);
    }
    printLargest(arr); 
  
   return 0; 
} 
