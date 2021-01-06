a = [int(x) for x in input().split()]

if a[0] >= a[1]:
    print(f"O JOGO DUROU {24 - a[0] + a[1]} HORA(S)")
else:
    print(f"O JOGO DUROU {a[1] - a[0]} HORA(S)")