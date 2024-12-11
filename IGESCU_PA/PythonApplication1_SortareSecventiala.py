n = int(input("Introdu numărul de elemente: "))
v = []

for i in range(n):
    element = int(input(f"Introdu V[{i}]= "))
    v.append(element)

element_cautat = int(input("Introdu elementul căutat: "))

for i in range(n):
    if v[i] == element_cautat:
        print(f"Elementul căutat se află la poziția: {i}")
          