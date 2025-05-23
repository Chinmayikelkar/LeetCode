// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [1,3,5,6], target = 5
// Output: 2
// Example 2:

// Input: nums = [1,3,5,6], target = 2
// Output: 1
// Example 3:

// Input: nums = [1,3,5,6], target = 7
// Output: 4

#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int low=0;
            int high=nums.size();
            int mid;
            if(target>nums[high-1]){
                return high;
            }
            while(low<=high){
                mid=(low+high)/2;
                if(nums[mid]==target){  
                    return mid;
                }
              
                if(target<nums[mid]){     
                high=mid-1;    
                }else{
                low=mid+1;        
                }
              
            }
             return  low;   
        }
    };
    

//Meethod 2
class Solution1 {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int index =0;
            for(int i=0;i<nums.size();i++){
                if (nums[i]>=target){
                    return i;
                }
                
        }
        return nums.size();
        }
    };    