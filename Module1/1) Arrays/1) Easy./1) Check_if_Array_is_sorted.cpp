Leetcode 1752 : 
https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

Code1: 
class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums.size()==1 || nums.size()==0){
            return true;
        }
        vector<int>newarr;
        for( int j=0; j<2;j++){
            for(auto val : nums){
                newarr.push_back(val);
            }
        }
        int count =1;
        int n1= nums.size();
        int n2 = newarr.size(); 
        int i=1;
        while(i<n2){
           if(newarr[i]>=newarr[i-1]){
            count++;
           }
           else {
             count=1;
           }

           if(count==n1){
             return true;
           }
           i++;
        }

        return false; 
    }
};

Time Complexity: O(2n)
Space Complexity: O(2n)
Logic: Created a new Array with twice the elements of original array and checked whether I get a sequence whose count is equal to the size of the array , if I get it : true else false.

Mistakes: higher Space Complexity

Code 2: Optimized: 
class Solution {
public:
    bool check(vector<int>& nums) {
        
        int count =0;
        int n= nums.size();
        int i=1;
        while(i<n){
           if(nums[i]<nums[i-1]){
            count++;
           }
           i++;
        }
        if(count==0){
            return true;
        }
        else if(count==1){
            if(nums[0]>=nums[n-1]){
              return true;
            }  
        }
        return false; 
         
    }
};

Time Complexity: O(n);
Space Complexity: O(1);
Optimizations : Reduced the extra space complexity of the problem.

