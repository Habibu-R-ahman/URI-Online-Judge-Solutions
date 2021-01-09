lst = []
for x in range(6):
    ans = float(input())
    lst.append(ans) if ans > 0.0 else None
print(f"{len(lst)} valores positivos")
print(f"{sum(lst)/len(lst):.1f}")