from tkinter import *
from tkinter import messagebox
import random  # Adăugăm importul pentru random

afisaj = Tk()
afisaj.title("Piatra Hartie Foarfeca")
afisaj.geometry("350x350")

reguli = ("Regulile jocului sunt:\n"
          "Piatra vs Hartie -> Hartie\n"
          "Piatra vs Foarfeca -> Piatra\n"
          "Hartie vs Foarfeca -> Foarfeca\n"
)

label_reguli_joc = Label(afisaj, text=reguli, fg="orange")
label_reguli_joc.pack(side="top")

reguli_joc = {
    "Piatra": {"Hartie": "pierde", "Foarfeca": "castiga"},
    "Hartie": {"Foarfeca": "pierde", "Piatra": "castiga"},
    "Foarfeca": {"Piatra": "pierde", "Hartie": "castiga"},
}

def joc(alegere_utilizator):
    optiuni_de_joc = list(reguli_joc.keys())
    alege_calculator = random.choice(optiuni_de_joc)
    mesaj = f"Calculatorul a ales {alege_calculator}\n"
    
    if alegere_utilizator == alege_calculator:
        mesaj += "Egalitate"
        messagebox.showinfo("Egalitate", mesaj)
    else:
        rezultat = reguli_joc[alegere_utilizator][alege_calculator]
        if rezultat == "castiga":
            mesaj += "Ai castigat!"
            messagebox.showinfo("Ai castigat", mesaj)
        else:
            mesaj += "Ai pierdut!"
            messagebox.showinfo("Ai pierdut", mesaj)

buton_piatra = Button(afisaj, text="Piatra", command=lambda: joc("Piatra"))
buton_piatra.pack(side="top")
buton_hartie = Button(afisaj, text="Hartie", command=lambda: joc("Hartie"))
buton_hartie.pack(side="top")
buton_foarfeca = Button(afisaj, text="Foarfeca", command=lambda: joc("Foarfeca"))
buton_foarfeca.pack(side="top")

afisaj.mainloop()
