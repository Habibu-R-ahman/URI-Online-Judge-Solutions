a = int(input())
b = [100, 50, 20, 10, 5, 2, 1]

print(f"{a}")
for x in b:
    print(f"{int(a / x)} nota(s) de R$ {x},00")
    a = a % x