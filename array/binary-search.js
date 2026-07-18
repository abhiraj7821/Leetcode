/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */

function solve(nums,low,high,target){
     if(low<=high){
        let mid = Math.floor((low+high)/2);
        if(nums[mid] == target){
            return mid;
        }
        else if(target > nums[mid]){
            low = mid+1;
            return solve(nums,low,high,target);
        }
        else {
            high = mid-1;
            return solve(nums,low,high,target);
        }
    }
    else{
        return -1;
    }
}
var search = function(nums, target) {
    return solve(nums,0,nums.length-1,target);
};