function twoSum(nums: number[], target: number): number[] {
    let indexMap = new Map();

    for (let i = 0; i < nums.length; i++) {
        let complement = target - nums[i];
        if (indexMap.has(complement)) {
            return [indexMap.get(complement), i];
        }
        indexMap.set(nums[i], i);
    }

    for (let i = 0; i < nums.length; i++) {
        let complement = target - nums[i];
        console.log(complement);
        console.log(indexMap);
        if (indexMap.has(complement) && indexMap.get(complement) !== i) {
            return [indexMap.get(nums[i]), indexMap.get(complement)];
        }
    }

    return [-1, -1];
}