n = int(input())
mem = [0]*(n+1)
mem[1] = 1
for i in range(2,n+1):
    mem[i] = mem[i-1]+mem[i-2]
print(mem[n])