a = [float(x) for x in input().split()]

m = ( (a[0] * 2) + (a[1] * 3) + (a[2] * 4) + a[3] ) / 10
print(f"Media: {m:.1f}")

if m >= 7:
    print("Aluno aprovado.")
elif (m >= 5 and m <= 6.9):
    print("Aluno em exame.")
    a.append(float(input()))
    print(f"Nota do exame: {a[-1]:.1f}")
    m = (m + a[-1]) / 2
    if m >= 5:
        print("Aluno aprovado.")
    elif m <= 4.9:
        print("Aluno reprovado.")
    print(f"Media final: {m:.1f}")
else:
    print("Aluno reprovado.")
