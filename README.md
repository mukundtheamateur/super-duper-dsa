# super-duper-dsa


Questions:

Arrays & Vectors

1. based on unordered_map, unordered_set and HashMap

	Two sum : https://leetcode.com/problems/two-sum/

2. Triplets:
	Given an array containing N integers, and an number S denoting target sum.
	Find all distinct integers that can add up to form target sum. The numbers in each triplet should be ordered in ascending order, and triplets should be ordered too. 	
	Return empty array if no such triplet exists.

	SOL: IN REPO /Array/triplets.cpp
	
3. Length of last word of a string  :  https://leetcode.com/problems/length-of-last-word/

4. 3sum(two pointer based approach) : https://leetcode.com/problems/3sum/
   ,br>// how to use 2 pointer approach 
   <br>-> first sort the array 
   -> start from , for(int i=0; i<size-2; i++) 
   -> int j = i+1;
   -> int k= n-1;
   -> while(j<k){
   	int cur_sum = first element;
	if(){
		j++;
		k--;
		}
	else (cur_sum>target) k--;
	else j++;
   	}
   
   

