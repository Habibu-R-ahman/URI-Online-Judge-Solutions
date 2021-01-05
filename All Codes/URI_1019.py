a = int(input())
b = [3600, 60]
ans = []

for x in b:
    ans.append(int(a / x))
    a %= x

print(f"{ans[0]}:{ans[1]}:{a}")