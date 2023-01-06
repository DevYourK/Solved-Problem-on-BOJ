def fibo(i):
    arr = []
    a, b = 1, 1
    for i in range(i):
        arr.append(a)
        a, b = b, a + b

    return arr[-1]

N = int(input())

if(N == 0):
    print(0)
else:
    print(fibo(N)%1000000007)