product_1 = [float(x) for x in input().split()]
product_2 = [float(x) for x in input().split()]

total = (product_1[1] * product_1[2]) + (product_2[1] * product_2[2])
print(f"VALOR A PAGAR: R$ {total:.2f}") 