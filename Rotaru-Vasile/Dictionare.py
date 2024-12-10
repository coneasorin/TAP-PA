def dictionar():
    student = {"Nume": "Maria", "Prenume": "Ioana", "varsta": 21}
    for cheie, valoare in student.items():
        print(cheie, valoare)

def lista_dictionare():
    student = [
        {"nume": "Maria", "varsta": 21, "locatie": "Bacau"},
        {"nume": "Ion", "varsta": 25, "locatie": "Bacau"},
    ]

    for s in student:
        for cheie, valoare in s.items():
            print(cheie, valoare)

def cautare_in_dictionar():
    studenti = [
        {"nume": "Maria", "varsta": 21, "locatie": "Bacau"},
        {"nume": "Ion", "varsta": 25, "locatie": "Bacau"},
    ]

    # Folosind Break
    for student in studenti:
        if student["nume"] == "Ion":
            print(student)
            break

    # Folosind list comprehension
    # Se creează o listă nouă doar cu elementele care îndeplinesc condiția
    # Ideal dacă sunt mai multe elemente care validează condiția
    rezultat = [student for student in studenti if student["nume"] == "Ion"]
    print(rezultat)

# Uncomment these function calls to test them
dictionar()
lista_dictionare()
cautare_in_dictionar()
