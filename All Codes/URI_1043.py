a = [float(x) for x in input().split()]

if a[0] + a[1] > a[2] and a[0] + a[2] > a[1] and a[1] + a[2] > a[0]:
    print(f"Perimetro = {sum(a):.1f}")
else:
    print(f"Area = {((a[0] + a[1]) * a[2]) / 2:.1f}")