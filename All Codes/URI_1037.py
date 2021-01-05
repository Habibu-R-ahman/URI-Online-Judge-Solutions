x = float(input())

if x < 0 or x > 100:
    print("Fora de intervalo")
elif x <= 25:
    print(f"Intervalo [0,25]")
elif x <= 50:
    print(f"Intervalo (25,50]")
elif x <= 75:
    print(f"Intervalo (50,75]")
elif x <= 100:
    print(f"Intervalo (75,100]")