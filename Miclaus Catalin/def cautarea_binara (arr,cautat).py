def cautare_binara(arr, cautat):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == cautat:
            return mid
        elif arr[mid] < cautat:
            low = mid + 1
        else:
            high = mid - 1
    return -1

# Citirea din fișier
with open('/home/miclauscatalin/Desktop/PA/TAP-PA/TAP-PA/Miclaus Catalin/sid_cautare.txt', 'r') as fisier:
    randuri_fisier = fisier.readlines()
    sir = list(map(int, randuri_fisier[0].strip().split()))  # Convertește șirul de caractere în listă de numere întregi

# Introducerea numărului căutat
cautat = int(input('Introdu numărul căutat: '))
result = cautare_binara(sir, cautat)

# Verificarea rezultatului și afișarea unui mesaj corespunzător
if result != -1:
    print(f'Elementul {cautat} a fost găsit în lista la indexul {result + 1}.')
else:
    print(f'Elementul {cautat} nu a fost găsit.')
