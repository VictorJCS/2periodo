imposto=0.11
inss=0.08
sindicato=0.05

salario=float(input("Quanto você ganha por hora: "))
hora_t=float(input("Quantas horas você trabalhou este mês: "))

salario_bruto=salario*hora_t
imp=imposto*salario_bruto
ins=inss*salario_bruto
sind=sindicato*salario_bruto
salario_liquido=salario_bruto-imp-ins-sind

print(f"O salário bruto foi: R$%.2f"%salario_bruto)
print(f"O imposto foi de: R$%.2f"%imp)
print(f"A taxa do inss foi de: R$%.2f"%ins)
print(f"A taxa do sindicato foi de: R$%.2f"%sind)
print(f"O salario liquido após os descontos foi: R$%.2f"%salario_liquido)