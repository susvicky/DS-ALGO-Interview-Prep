//Fibonacci number using recursion

//pseudocode

def nthFibonacci (n):
        # code here
        if n<=2:
            return 1
        else:
            return nthFibonacci(n-1)+nthFibonacci(n-2)
