## [The Problem](https://leetcode.com/problems/two-sum/)

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

```
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
```

---

## The Solution

> > Runtime & Memory Usage determined by leet code compiler. I'm not sure how they are calculating this but it seems to flectuate.

> [TwoSum-BruteForce](./TwoSum-BruteForce-Solution_1.js)

Nested for loops

```
Time complexity : O(n^2)

-------------------------------------------------------
TEST 1
Runtime: 132 ms, faster than 27.54% of JavaScript online submissions for Two Sum.
Memory Usage: 36.7 MB, less than 21.61% of JavaScript online submissions for Two Sum.

TEST 2
Runtime: 188 ms, faster than 13.31% of JavaScript online submissions for Two Sum.
Memory Usage: 37 MB, less than 17.58% of JavaScript online submissions for Two Sum.
```

> [TwoSum-Solution_2](./TwoSum-Refactor-Solution_2.js)

Using a forEach and indexOf

```
Time complexity : O(n)

-------------------------------------------------------
TEST 1
N/A because this codes does not seem to pass all the test cases
```

> [TwoSum-Solution_3](./TwoSum-Refactor-Solution_3.js)

Solution using Hash -> hasOwnProperty()

```
Time complexity : O(n)
Space complexity: O(n)

-------------------------------------------------------
TEST 1
Runtime: 112 ms, faster than 40.60% of JavaScript online submissions for Two Sum.
Memory Usage: 38.1 MB, less than 6.55% of JavaScript online submissions for Two Sum.

TEST 2
Runtime: 64 ms, faster than 81.61% of JavaScript online submissions for Two Sum.
Memory Usage: 37.6 MB, less than 9.13% of JavaScript online submissions for Two Sum.

```

> [TwoSum-Solution_4](./TwoSum-Refactor-Solution_4.js)

Solution using Map() property

```
Time complexity : O(n)
Space complexity: O(n)

-------------------------------------------------------
TEST 1
Runtime: 72 ms, faster than 66.93% of JavaScript online submissions for Two Sum.
Memory Usage: 36.8 MB, less than 22.97% of JavaScript online submissions for Two Sum.

TEST 2
Runtime: 64 ms, faster than 81.61% of JavaScript online submissions for Two Sum.
Memory Usage: 37.5 MB, less than 10.72% of JavaScript online submissions for Two Sum.

TEST3
Runtime: 60 ms, faster than 86.98% of JavaScript online submissions for Two Sum.
Memory Usage: 37.1 MB, less than 16.91% of JavaScript online submissions for Two Sum.

```

---

[citation](https://rohan-paul.github.io/javascript/2018/04/29/2-sum/)
