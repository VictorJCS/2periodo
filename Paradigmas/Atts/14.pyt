limite=50
multa_por_quilo=4.00

peso=float(input("Informe quantos quilos peixo: "))

if peso > limite:
    excesso=peso-limite
    multa=excesso*multa_por_quilo
else: 
    excesso=0
    multa=0.00
    print(f"\nPeso total de peixes: {peso}kg")
if excesso>0:
    print(f"Excesso de peso: {excesso}kg")
    print(f"Multa a pagar: R${multa:.2f}")
else:
   print("Não há excesso de peso. Não há multa a pagar.")