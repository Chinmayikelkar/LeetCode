// Alice and Bob take turns playing a game, with Alice starting first.

// Initially, there is a number n on the chalkboard. On each player's turn, that player makes a move consisting of:

// Choosing any x with 0 < x < n and n % x == 0.
// Replacing the number n on the chalkboard with n - x.
// Also, if a player cannot make a move, they lose the game.

// Return true if and only if Alice wins the game, assuming both players play optimally.

// Example 1:

// Input: n = 2
// Output: true
// Explanation: Alice chooses 1, and Bob has no more moves.
// Example 2:

// Input: n = 3
// Output: false
// Explanation: Alice chooses 1, Bob chooses 1, and Alice has no more moves.


// Approach
// winner=0variable indicates the players : Alice and Bob.
// On each players's turn, the x must be equal to 1. So, n = n-x is equal to n = n-1 and n%x==0 must be True.
// while loop will iterate till n!=1 because (0 < x < n) and if n==1 then there will be no possible value for x .
// Alice will start playing first. So, when winner evaluates to an odd number the winner will be Alice.
// Similarly, when winner evaluates to an even number the winner will be Bob.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        bool divisorGame(int n) {
            int winner = 0;
            while(n!=1){
                winner += 1;
                n -= 1;
            }
            
            if(winner%2==0){   
                return false; 
            }else{
                return true;
            }
    
        }
    };


//Wrong Answer:
class Solution {
    public:
        bool divisorGame(int n) {
            for(int i=1; i<n; i++)
            {
                if(n%i==0){
                    n=n-i;
                    if(n==1)
                        return true;
                    else
                        return false;
                }       
            }
            return true; 
        }
    };    