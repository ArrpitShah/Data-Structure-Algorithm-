//prefix[i] = arr[0] + arr[1] + ... + arr[i]
//What is prefix sum?
//Prefix sum is a technique used to calculate the cumulative sum of an array. It allows us to quickly compute the sum of any subarray in constant time after an initial preprocessing step. The prefix sum array is constructed such that each element at index i contains the sum of all elements from the original array up to index i. This can be particularly useful in scenarios where we need to perform multiple range sum queries on the same array, as it reduces the time complexity of each query from O(n) to O(1) after an O(n) preprocessing step to build the prefix sum array.
// arr = [1,2,3,4]

// prefix =
// [1,3,6,10]
//sum=prefix[R]−prefix[L−1]