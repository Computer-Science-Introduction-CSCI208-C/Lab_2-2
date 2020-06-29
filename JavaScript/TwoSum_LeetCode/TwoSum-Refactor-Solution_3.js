function twoSumAlt2(array, target) {
  let numObject = {};
  for (let i = 0; i < array.length; i++) {
    let thisNum = array[i];
    numObject[thisNum] = i;
  }
  for (let i = 0; i < array.length; i++) {
    let difference = target - array[i];
    if (numObject.hasOwnProperty(difference) && numObject[difference] !== i) {
      return [i, numObject[difference]];
    }
  }
}

/* Test cases */

console.log(twoSumAlt2([2, 7, 11, 15], 9));
// Expected Output [ 0, 1 ]

console.log(twoSumAlt2([3, 2, 4], 6));
// Expected Output [ 1, 2 ]

console.log(twoSumAlt2([5, 1, 4, 2, 6], 7));
// Expected Output [ 0, 3, 1, 4 ]
// Output [ 0, 3 ] -- I'm not sure if it's only supposed to retun 1 set or all sets

console.log(twoSumAlt2([3, 3], 6));
// Expected Output [ 0, 1 ]
