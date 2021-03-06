//You are given a number n. You need to find the sum of digits of n.

//pseudocode

def sumOfDigits(n):
    if n//10==0:
        return n
    else:
        return (n%10)+sumOfDigits(n//10)
