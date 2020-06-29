let twoSum = (array, target) => {
  let result = [];

  for (let i = 0; i < array.length; i++) {
    for (let j = i + 1; j < array.length; j++) {
      if (array[i] + array[j] === target) {
        result.push(i);
        result.push(j);
      }
    }
  }
  return result;
};

/* Test cases */

console.log(twoSum([2, 7, 11, 15], 9));
// Expected Output [ 0, 1 ]

console.log(twoSum([3, 2, 4], 6));
// Expected Output [ 1, 2 ]

console.log(twoSum([5, 1, 4, 2, 6], 7));
// Expected Output [ 0, 3, 1, 4 ]

console.log(twoSum([3, 3], 6));
// Expected Output [ 0, 1 ]
