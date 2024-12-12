def flip(arr, k):
    """Întoarce primele k elemente ale listei."""
    arr[:k] = arr[:k][::-1]

def pancake_sort(arr):
    """Sortează o listă folosind metoda pancake."""
    n = len(arr)
    for size in range(n, 1, -1):
        # Găsește indexul celui mai mare element din sublista curentă
        max_index = arr.index(max(arr[:size]))

        if max_index != size - 1:
            # Întoarce lista pentru a aduce cel mai mare element la început
            flip(arr, max_index + 1)
            # Întoarce din nou pentru a aduce cel mai mare element la poziția corectă
            flip(arr, size)
    return arr

# Citirea listei dintr-un fișier text
def citeste_lista_din_fisier(nume_fisier):
    """Citește o listă de numere dintr-un fișier text."""
    with open(nume_fisier, 'r') as f:
        continut = f.read()
    # Transformă conținutul în listă de numere
    return list(map(int, continut.split()))

# Exemplu de utilizare
nume_fisier_intrare = "lista_pancake.txt"  # Fișierul cu lista nesortată

# Citim lista din fișier
lista = citeste_lista_din_fisier(nume_fisier_intrare)
print("Lista citită din fișier:", lista)

# Sortăm lista
lista_sortata = pancake_sort(lista)
print("Lista sortată:", lista_sortata)
