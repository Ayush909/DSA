//Q. Given an integer array nums, find the contiguous subarray
// (containing at least one number) which has the largest sum and return its sum.

//Solving using Kadane's Algorithm

//Alternate1 -  It does not solve when all numbers in the array are negative.

var maxSubArray = function(nums) {
    let max_so_far = 0;
    let max_ending_here = 0;
    
    for(let i = 0 ; i < nums.length ; i++){
        max_ending_here += nums[i];
        
        if(max_ending_here < 0){
            max_ending_here = 0;
        }else if(max_so_far < max_ending_here){
            max_so_far = max_ending_here;
        }
        
    }
    return max_so_far;
};

maxSubArray([-2,1,-3,4,-1,2,1,-5,4])


// Alternate2 - Solves even when all the numbers in the array are negative

var maxSubArray = function(nums) {
    let max_so_far = nums[0];
     let cur_max = nums[0];
     
     for(let i = 1 ; i< nums.length ; i++){
         cur_max = Math.max(nums[i] , cur_max + nums[i]);
         max_so_far = Math.max(max_so_far, cur_max);
     }
     
     return max_so_far;
 };
 
 maxSubArray([-2,1,-3,4,-1,2,1,-5,4])

