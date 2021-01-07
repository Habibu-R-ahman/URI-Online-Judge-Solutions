# Habibu-R-ahman
# 7th Jan, 2021

a = float(input())
salary = money = percentage = None

if a <= 400:
    salary = a * 1.15
    percentage = 15
elif a <= 800:
    salary = a * 1.12
    percentage = 12
elif a <= 1200:
    salary = a * 1.10
    percentage = 10
elif a <= 2000:
    salary = a * 1.07
    percentage = 7
else:
    salary = a * 1.04
    percentage = 4

print(f"Novo salario: {salary:.2f}")
print(f"Reajuste ganho: {salary - a:.2f}")
print(f"Em percentual: {percentage} %")