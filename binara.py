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
with open(r'C:\Users\Student\Desktop\David\fis.txt') as fisier:
    randuri_fisier = fisier.readlines()
    sir = list(map(int, randuri_fisier[0].strip().split()))  # Folosim split() pentru a delimita numerele separate
 
cautat = int(input("Introdu numarul cautat: "))
result = cautare_binara(sir, cautat)
if result != -1:
    print(f"Elementul {cautat} a fost gasit la indexul {result+1}.")
else:
    print(f"Elementul {cautat} nu a fost gasit.")
