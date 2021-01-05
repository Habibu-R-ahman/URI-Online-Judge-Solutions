a = float(input())
b = [100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01]
c = "nota(s) de R$"

print(f"NOTAS:")
for x in b:
    print(f"{int(a / x)} {c} {x:.2f}")
    a %= x
    a = float(f"{a:.2f}") # I love f-string..Ummahh :* 
    if x == 2.00:
        print(f"MOEDAS:")
        c = "moeda(s) de R$"