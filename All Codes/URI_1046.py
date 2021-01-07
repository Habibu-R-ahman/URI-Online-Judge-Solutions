a = [int(x) for x in input().split()]

if a[0] >= a[1]:
    a[1] += 24

print(f"O JOGO DUROU {a[1] - a[0]} HORA(S)")