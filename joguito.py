import random
pontos = 0
while 1:
	a = random.randrange(0, 100);
	print("o numero a seguir vai ser maior que 50?")
	print("S para sim ou N para não")
	print("Pressione F para sair")
	n = input()
	if n == "F":
  		break
	if n == 'S' and a >= 50:
		pontos = pontos + 1
		print("ACERTOU!")
	elif n == 'S' and a < 50:
		print("ERROOUU!!")
	elif n == 'N' and a < 50:
		pontos = pontos + 1
		print("ACERTOU!")
	elif n == 'N' and a > 50:
		print("ERROOUU!!")
	if n == "F":
  		break
	print("valor sorteado:",a)
print("pontos:",pontos)