a = [int(x) for x in input().split()]

if a[0] % a[1] == 0 or a[1] % a[0] == 0:
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")