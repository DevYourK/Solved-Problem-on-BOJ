def Q():

    return 

A = int(input())

for i in range(0, A):
    S = set()
    A, B, C, D = map(int, input().split())
    
    if(D==0):
        S.add(0)

    else:
        DoA = D/A
        for j in range(-DoA, DoA):
            if(j*j*j + (B/A)*j*j + (C/A)*j + (D/A) == 0):
                S.add(j)
                break