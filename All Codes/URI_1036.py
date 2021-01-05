a = [float(x) for x in input().split()]
# a[0] = a
# a[1] = b
# a[2] = c

# cal = (b * b) - 4 * a * c 
cal = (a[1] * a[1]) - 4 * a[0] * a[2]

# (b * b) - 4 * a * c < 0 || a == 0
con = False if cal < 0 or a[0] == 0 else True

if con:
    root_sqr = cal ** 0.5
    pos = (-a[1] + root_sqr) / (2 * a[0])
    neg = (-a[1] - root_sqr) / (2 * a[0])
    print(f"R1 = {pos:.5f}\nR2 = {neg:.5f}")
else:
    print("Impossivel calcular")
