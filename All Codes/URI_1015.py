a = [float(x) for x in input().split()]  # a[0] = x1 , a[1] = y1
b = [float(y) for y in input().split()]  # b[0] = x2 , b[1] = y2

temp_1   = (b[0] - a[0]) * (b[0] - a[0])
temp_2   = (b[1] - a[1]) * (b[1] - a[1])
distance = (temp_1 + temp_2) ** 0.5

print(f"{distance:.4f}")