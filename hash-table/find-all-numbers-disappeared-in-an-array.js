/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDisappearedNumbers = function(nums) {
    const numsSet = new Set(nums);
    // Approch 1: Set approch
    // const allNumsSet = new Set();
    // for(let i=1;i<=nums.length;i++){
    //     allNumsSet.add(i);
    // }
    // return Array.from(allNumsSet.difference(numsSet));

    // Approch 2: List approch 
    let res = []
    for(let i=1; i<=nums.length;i++){
        if(!numsSet.has(i)) res.push(i);
    }
    return res;
};