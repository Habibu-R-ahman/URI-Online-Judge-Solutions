a = int(input())
b = [365, 30]
ans = []

for x in b:
    ans.append(int(a / x))
    a %= x

print(f"{ans[0]} ano(s)\n{ans[1]} mes(es)\n{a} dia(s)")