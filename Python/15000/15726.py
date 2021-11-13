a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)

axb = float((a*b)/c)
bxc = float((a/b)*c)

print(int(axb) if axb>bxc else int(bxc))