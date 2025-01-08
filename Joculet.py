from tkinter import*
from tkinter import messagebox
import random 
afisaj = Tk()
afisaj.title ("Piatra Hartie Foarfeca")
#afisaj.geometry ("350x350")
reguli = ("Regulile jocului sunt:\n"
          "Piatra vs Hartie -> Hartie\n"
          "Piatra vs Foarfeca -> Piatra\n"
          "Hartie vs Foarfeca -> Foarfeca"
          )
#print(reguli)
label_reguli_joc = Label(afisaj, text=reguli,fg="red")
label_reguli_joc.pack(side="top")

reguli_joc = {
    "Piatra": {"Hartie" :"pierde","Foarfeca":"castiga"},
    "Hartie": {"Foarfeca":"pierde","Piatra":"castiga"},
    "Foarfeca": {"Piatra":"pierde","Hartie":"castiga"},
}
def joc(alegere_utilizator):
    optiuni_de_joc=list(reguli_joc.keys())
    alegere_calculator = random.choice(optiuni_de_joc)
    mesaj = f"Calculatorul a ales {alegere_calculator}\n"
    if alegere_calculator == alegere_utilizator:
        mesaj+= "Egalitate"
        messagebox.showinfo("Egalitate",mesaj)
    else:
        rezultat = reguli_joc[alegere_utilizator] [alegere_calculator] 
    if rezultat == "castiga":
        mesaj+= "Ai castigat"
        messagebox.showinfo("AI CASTIGAT", mesaj)
    else:
        mesaj+= "Ai pierdut"
        messagebox.showinfo("AI PIERDUT", mesaj)
button_piatra = Button(afisaj, text="Piatra", command=lambda:joc("Piatra"))
button_piatra.pack(side="left")
button_hartie = Button(afisaj, text="Hartie", command=lambda:joc("Hartie"))
button_hartie.pack(side="left")
button_foarfeca = Button(afisaj, text="Foarfeca", command=lambda:joc("Foarfeca"))
button_foarfeca.pack(side="left")


afisaj.mainloop()