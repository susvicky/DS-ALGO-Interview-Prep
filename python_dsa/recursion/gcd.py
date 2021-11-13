#Greatest Common Divisor of two numbers using recursion

def gcd(A,B):
    if B==0:
        return A
    else:
        return gcd(B,A%B)
        
        
print(gcd(48,18))
