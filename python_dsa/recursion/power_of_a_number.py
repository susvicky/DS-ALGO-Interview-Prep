#You are given two numbers n and p. You need to find np.

#pseudocode

def RecursivePower(n,p):
    # code here
    if p==0:
        return 1
    elif p==1:
        return n
    else:
        return n*RecursivePower(n,p-1)

