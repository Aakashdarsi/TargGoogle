
def fibo(n):
    if(memoised[n] == -1):
        res = None 
        if n== 0 or n==1 :
            res =  n 
        else:
            res = fibo(n-1) + fibo(n-2);
        memoised[n] = res 
    return memoised[n]
        


n = int(input())
memoised = [-1]*(n+1)
print(fibo(n))