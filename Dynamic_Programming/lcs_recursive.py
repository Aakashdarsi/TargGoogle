def lcs(s1,s2,m,n):
    if m == 0 or n == 0:
        return 0 
    if s1[m-1] == s2[n-1]:
        1+lcs(s1,s2,m-1,n-1)
    else: 
        return max(lcs(s1,s2,m-1,n),lcs(s1,s2,m,n-1))

       




s1 = input()
s2 = input()
m = len(s1)
n = len(s2)
print(lcs(s1,s2,len(s1),len(s2)))