angle = [float(x) for x in input().split()]

TRIANGULO =  angle[0] * angle[2]  * 0.5
CIRCULO   =  angle[2] * angle[2]  * 3.14159
TRAPEZIO  =( angle[0] + angle[1] )* angle[2] * 0.5
QUADRADO  =  angle[1] * angle[1]
RETANGULO =  angle[0] * angle[1]

print(f"TRIANGULO: {TRIANGULO:.3f}")
print(f"CIRCULO: {CIRCULO:.3f}")
print(f"TRAPEZIO: {TRAPEZIO:.3f}")
print(f"QUADRADO: {QUADRADO:.3f}")
print(f"RETANGULO: {RETANGULO:.3f}")