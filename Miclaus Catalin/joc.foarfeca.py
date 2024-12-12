from tkinter import *
from tkinter import messagebox
import random

# main window
afisaj = Tk()
afisaj.title("Piatra, Hartie, Foarfeca")

# reguli
reguli = """Regulile jocului sunt:
Piatra vs Hartie -> Hartie
Piatra vs Foarfeca -> Piatra
Hartie vs Foarfeca -> Foarfeca"""
label_reguli_joc = Label(afisaj, text=reguli, fg="red")
label_reguli_joc.pack(side="top", padx=10, pady=10)

# dictionarul cu reguli joc
reguli_joc = {
    "Piatra": {"Hartie": "Pierde", "Foarfeca": "Castiga"},
    "Hartie": {"Foarfeca": "Pierde", "Piatra": "Castiga"},
    "Foarfeca": {"Piatra": "Pierde", "Hartie": "Castiga"}
}

# Scorurile pentru utilizator și calculator
scor_utilizator = 0
scor_calculator = 0

# Functie ptr update score
def actualizeaza_scor():
    label_scor.config(text=f"Scor - Tu: {scor_utilizator} | Calculator: {scor_calculator}")

# Ffunctie ptr a juca
def joc(alegere_utilizator):
    global scor_utilizator, scor_calculator

    # verifica daca cineva a castigat
    if scor_utilizator == 3 or scor_calculator == 3:
        mesaj_final = "Ai câștigat jocul!" if scor_utilizator == 3 else "Calculatorul a câștigat jocul!"
        messagebox.showinfo("Joc încheiat", mesaj_final)
        afisaj.quit()  # inchide fereastra la victorie
        return

    optiuni_de_joc = list(reguli_joc.keys())
    alegere_calculator = random.choice(optiuni_de_joc)
    mesaj = f"Calculatorul a ales {alegere_calculator}. "
    
    # verifica egal
    if alegere_calculator == alegere_utilizator:
        mesaj += "Egalitate!"
        messagebox.showinfo("Egalitate", mesaj)
    else:
        rezultat = reguli_joc[alegere_utilizator][alegere_calculator]
        if rezultat == "Castiga":
            scor_utilizator += 1
            mesaj += "Ai câștigat!"
            messagebox.showinfo("Castig", mesaj)
        else:
            scor_calculator += 1
            mesaj += "Ai pierdut!"
            messagebox.showinfo("Pierdere", mesaj)

    # Update scor
    actualizeaza_scor()

# Butoane
button_piatra = Button(afisaj, text="Piatra", command=lambda: joc("Piatra"))
button_piatra.pack(side="left", padx=10, pady=10)

button_hartie = Button(afisaj, text="Hartie", command=lambda: joc("Hartie"))
button_hartie.pack(side="left", padx=10, pady=10)

button_foarfeca = Button(afisaj, text="Foarfeca", command=lambda: joc("Foarfeca"))
button_foarfeca.pack(side="left", padx=10, pady=10)

# o tabela de marcaj :)
label_scor = Label(afisaj, text=f"Scor - Tu: {scor_utilizator} | Calculator: {scor_calculator}", font=("Arial", 12))
label_scor.pack(side="top", padx=10, pady=10)

# start GUI
afisaj.mainloop()
