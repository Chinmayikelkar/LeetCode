// is a number palindrome or not

#include<iostream>
using namespace std;
class Solution {
    public:
        bool isPalindrome(int x) {
            if (x < 0) return false;
            double rev=0;
            int rem;
            double og = x;
    
            while(x!=0){
                rem = x%10;
                rev = rev*10 + rem;
                x = x/10;
            }
            return (og == rev);   
        }
    };
