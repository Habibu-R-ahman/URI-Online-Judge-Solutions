x = [float(x) for x in input().split()]

if sum(x) == 0:
    print("Origem")
elif x[0] == 0:
    print("Eixo Y")
elif x[1] == 0:
    print("Eixo X")
elif x[0] > 0 and x[1] > 0:
    print("Q1")
elif x[0] < 0 and x[1] > 0:
    print("Q2")
elif x[0] < 0 and x[1] < 0:
    print("Q3")
elif x[0] > 0 and x[1] < 0:
    print("Q4")

