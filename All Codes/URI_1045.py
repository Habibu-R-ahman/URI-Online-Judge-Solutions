x = [float(x) for x in input().split()]
a = max(x[0], max(x[1], x[2]))
b = c = None

if a == x[0]:
    b = max(x[1], x[2])
    c = min(x[1], x[2])
elif a == x[1]:
    b = max(x[0], x[2])
    c = min(x[0], x[2])
else:
    b = max(x[0], x[1])
    c = min(x[0], x[1])

if a >= b + c:
    print("NAO FORMA TRIANGULO")
elif a*a == (b*b + c*c):
    print("TRIANGULO RETANGULO")
elif a*a > (b*b + c*c):
    print("TRIANGULO OBTUSANGULO")
elif a*a < (b*b + c*c):
    print("TRIANGULO ACUTANGULO")
if a == b == c:
    print("TRIANGULO EQUILATERO")
elif a == b or b == c:
    print("TRIANGULO ISOSCELES")