a = [int(x) for x in input().split()]

b = (a[0] + a[1] + abs(a[0] - a[1])) * 0.5
c = (b + a[2] + abs(b - a[2])) * 0.5

print(f"{int(c)} eh o maior")