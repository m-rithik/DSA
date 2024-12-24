//9.Palindrome

#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(long x) {
    if (x<0)
    return false;
    long rev = 0;
    long ori = x;
    for (; x != 0; x /= 10) {
        rev = rev * 10 + x % 10;
    }
    return rev == ori;
}

/*
Just rev the array and check if rev==ori
*/