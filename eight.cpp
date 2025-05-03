/*
There are n bulbs that are initially off. You first turn on all the bulbs, then you turn off every second bulb.

On the third round, you toggle every third bulb (turning on if it's off or turning off if it's on). For the ith round, you toggle every i bulb. For the nth round, you only toggle the last bulb.

Return the number of bulbs that are on after n rounds.*/


// Toggling and Number of Factors:
// Each bulb gets toggled in the rounds where its position number is divisible by the round number.
// So, bulb x is toggled once for every factor of x.

// Example:
// Bulb 6 has factors: 1, 2, 3, 6 → toggled 4 times → even → ends OFF
// Bulb 9 has factors: 1, 3, 9 → toggled 3 times → odd → ends ON

// Key Insight – Perfect Squares:
// Only perfect squares have an odd number of factors.

// Why?
// Normally, factors come in pairs: e.g., for 12 → (1,12), (2,6), (3,4)
// For a perfect square, like 36 → (1,36), (2,18), (3,12), (4,9), (6,6) → here, (6,6) is a repeated factor → not a pair → total number of distinct factors is odd.

// Thus:
// If a bulb position is a perfect square, it gets toggled an odd number of times → it ends ON
// All others are toggled an even number of times → they end OFF

// Final Answer:
// We just need to count how many perfect squares ≤ n.

// Because:
// If n is 10 → perfect squares are: 1, 4, 9 → total = 3 → √10 ≈ 3.16 → floor is 3
// If n is 36 → perfect squares: from 1² to 6² → √36 = 6 → Answer is 6


#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class Solution {
    public:
        int bulbSwitch(int n) {
            return sqrt(n);
        }
};