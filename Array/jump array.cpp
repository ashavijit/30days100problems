/*You are at the start of an array. (in 0). Every index will hold the value of maximum steps you take from that index (if the value is 0 then the person cannot move) in one jump. You have to reach the end of the array. Print the minimum number of steps required to reach the endpoint. If it is not possible to reach the end, print -1.
//Sample Input:



//10 (Number of elements of the array)

//5 5 0 4 1 4 5 5 3 2 (Steps taken at each jump)



//sample Output:



2



//Explanation:



//he first element is 5. Using that, we can reach 5 steps. So, reach the 5th index, which is 4. From there, we can make 4 steps, which leads us to the end of the array.



//start -> 5 -> 4 -> end



//Input the number of elements of the array.
//Input the elements of the array (At most steps at each step).
//Assign max_level = arr[0], step = arr[0] and jump = 1.
//if(arr[0] == )
//jump = -1
//else
//epeat from i = 1 to n - 1
//maxLevel = max(maxLevel,i+a[i]);
//step--;
//if(step == 0)
//jump++;
//if(i>= maxLevel)
//jump=-1;
//break;
//step=maxLevel-i;
//return jump.
Src=YouTube 
Problem Source = Amazon SDE Interview */




#include<bits/stdc++.h>
#include<vector>
using namespace std;
int jumps(vector<int> &A)
{
	if(A.size()<=1)
    	return 0;
	if(A[0]==0)
    	return -1;
	int n = A.size();
	int jumps = 1;
	int reach = 0;
	int curr = A[0];
	for(int i=1;i<n;i++)
	{
    	reach = max(reach, i+A[i]);
    	if(curr==i && i!=n-1)
    	{
        	jumps++;
        	curr = reach;
        	reach = -1;
    	}
    	if(curr==i && i!=n-1)
        	return -1;	
	}	
	return jumps;
}
int main()
{
	int n;
	vector<int> A;
	cin>>n;
	for(int i = 0;i<n;i++)
	{
		int v;
		cin>>v;
		A.push_back(v);
	}
	cout<<jumps(A);
}

