def cautare_secventiala(lista, element_cautat):
    """
    Caută un element într-o listă utilizând metoda secvențială.
    :param lista: Lista de elemente.
    :param element_cautat: Elementul de găsit.
    :return: Indexul elementului dacă este găsit, altfel -1.
    """
    for index, element in enumerate(lista):
        if element == element_cautat:
            return index  # Returnează indexul elementului 
    return -1  # Returnează -1 dacă elementul nu este găsit



lista = [3, 5, 7, 9, 11]
element_cautat = 7

rezultat = cautare_secventiala(lista, element_cautat)

if rezultat != -1:
    print(f"Elementul {element_cautat} a fost găsit la indexul {rezultat}.")
else:
    print(f"Elementul {element_cautat} nu a fost găsit în listă.")
