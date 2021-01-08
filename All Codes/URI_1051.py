a = float(input())

if a <= 2000.00:
    print("Isento")
elif a <= 3000.00:
    print(f"R$ {(a - 2000.00) * 0.08:.2f}")
elif a <= 4500.00:
    print(f"R$ {(a - 3000.00) * 0.18 + 80:.2f}")
else:
    print(f"R$ {(a - 4500.00) * 0.28 + 350:.2f}")