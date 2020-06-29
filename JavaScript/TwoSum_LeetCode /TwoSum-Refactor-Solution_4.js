function twoSumAlt3(array, target) {
  const numsMap = new Map();
  for (let i = 0; i < array.length; i++) {
    if (numsMap.has(target - array[i])) {
      return [numsMap.get(target - array[i]), i];
      // get() returns a specified element associated with the specified key from the Map object.
    } else {
      numsMap.set(array[i], i);
      //  set() adds or updates an element with a specified key and value to a Map object.
    }
  }
}

/* Test cases */

console.log(twoSumAlt3([2, 7, 11, 15], 9));
// Expected Output [ 0, 1 ]

console.log(twoSumAlt3([3, 2, 4], 6));
// Expected Output [ 1, 2 ]

console.log(twoSumAlt3([5, 1, 4, 2, 6], 7));
// Expected Output [ 0, 3, 1, 4 ]
// Output [ 0, 3 ] -- I'm not sure if it's only supposed to retun 1 set or all sets

console.log(twoSumAlt3([3, 3], 6));
// Expected Output [ 0, 1 ]
