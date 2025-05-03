// Alice and Bob are playing a game on a string.

// You are given a string s, Alice and Bob will take turns playing the following game where Alice starts first:

// On Alice's turn, she has to remove any non-empty substring from s that contains an odd number of vowels.
// On Bob's turn, he has to remove any non-empty substring from s that contains an even number of vowels.
// The first player who cannot make a move on their turn loses the game. We assume that both Alice and Bob play optimally.

// Return true if Alice wins the game, and false otherwise.

// The English vowels are: a, e, i, o, and u.

// Intution:
// If the number of vowels is 0, Bob wins because Alice has no vowels to pick.
// If the number of vowels is odd, Alice can pick all of them on her turn. In this case, Bob will have no vowels left to pick on his turn, resulting in Bob losing.
// If the number of vowels is even, say n, Alice can pick n - 1 vowels on her turn, leaving exactly 1 vowel (which is odd) for Bob. Bob will then be unable to pick any more vowels on his turn, resulting in Bob losing.
// Therefore, if the count of vowels is greater than 0, Alice will win; otherwise, Bob will win.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        bool doesAliceWin(string s) {
           for(int i=0;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                return true;
            }
           } 
           return false;
        }
    };