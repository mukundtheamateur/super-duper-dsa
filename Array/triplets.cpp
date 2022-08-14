#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > triplet(vector<int> arr, int target){
	// using two pointer approach first we will take 
	vector<vector<int> > result;
	sort(arr.begin(), arr.end());
	// pick every a[i], pair sum for remaining part
	int n = arr.size();
	for(int i=0; i<=n-3; i++){
		int j= i+1;
		int k = n-1;
		
		//two pointer approach
		while(j<k){
			int current_sum = arr[i];
			current_sum += arr[j];
			current_sum += arr[k];
			
			if(current_sum==target){
//			
				result.push_back({arr[i], arr[j], arr[k]});
				j++;
				k--;
			}
			else if(current_sum > target){
				k--;
			}
			else {
				j++;
			}
		}
	}
	cout<<"hey:";
	return result;
	
}

int main(){
	vector<int> arr2{1,2,3,4,5,6,7,8,9,15};
	int targe = 18;
	
	// find all triplet whose sum is 18 
	// all the elements in triplets must be in ascending order
	// all the triplets must be ordered as well in ascending order
	
	auto result = triplet(arr2,targe);
	for(auto v: result){
		for(auto no: v){
			
			cout<<no<<",";
		}	
		cout<<endl;
	}

	return 0;
}
