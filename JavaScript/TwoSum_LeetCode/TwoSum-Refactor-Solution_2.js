let twoSumAlt1 = function (array, target) {
  let result = [];

  array.forEach(function (num, i) {
    let differnce = target - num;
    let k = array.indexOf(differnce);
    if (k > -1 && k !== i) {
      result.push(i);
    }
  });
  return result;
};

/* Test cases */

console.log(twoSumAlt1([2, 7, 11, 15], 9));
// Expected Output [ 0, 1 ]

console.log(twoSumAlt1([3, 2, 4], 6));
// Expected Output [ 1, 2 ]

console.log(twoSumAlt1([5, 1, 4, 2, 6], 7));
// Expected Output [ 0, 3, 1, 4 ]

/* ------------------------------------------ */
console.log(twoSumAlt1([3, 3], 6));
// Expected Output [ 0, 1 ]
// this test case does not work
// Output [ 1 ]
