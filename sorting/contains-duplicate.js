/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    const set = new Set(nums);
    // for(let i=0;i<nums.length;i++){
    //     if(set.has(nums[i])){
    //         return true
    //     }
    //     set.add(nums[i])
    // }
    // return false
    
    // If 
    if(set.size===nums.length) return false;
    else return true
};