fibonacci = [0,1,1,2]

def index_exists(arr, i):
    return (0 <= i < len(arr)) or (-len(arr) <= i < 0)

def fibo(n):
    if index_exists(fibonacci, n):
        return fibonacci[n]
    else:
        fibonacci.append(fibo(n-1)+fibo(n-2)) 
        return fibonacci[n]

N = input()
N = int(N)

for i in range(0, N):
    K = input()
    K = int(K)

    if K==0:
        print("1 0")
    elif K==1:
        print("0 1")
    else:
        print(fibo(K-1), fibo(K))