# Program Python pentru cautare liniara folosind metoda iterativa
def cautare_liniara(lista, tinta):
    # Traversam toate elementele din lista
    for index in range(len(lista)):
        # Daca elementul este gasit, returnam indexul acestuia
        if lista[index] == tinta:
            return index
    # Daca elementul nu este gasit, returnăm -1
    return -1

# Exemplu de utilizare:
lista = [10, 23, 45, 70, 11, 15]
tinta = 70

# Apelarea functiei
rezultat = cautare_liniara(lista, tinta)

if rezultat != -1:
    print(f"Elementul a fost gasit la indexul: {rezultat}")
else:
    print("Elementul nu a fost gasit în lista")
