from tkinter import *
from tkinter import messagebox
import random

afisaj = Tk()

afisaj.title("Piatra, Hartie, Foarfeca")
#afisaj.geometry("350x350")
reguli = ("Regulile jocului sunt:\n"
          "Piatra vs Hartie -> Hartie\n"
          "Piatra vs Foarfeca -> Piatra\n"
          "Hartie vs Foarfeca -> Foarfeca\n"
          )

label_reguli_joc = Label(afisaj,text=reguli,fg ="blue")
label_reguli_joc.pack(side="top")

reguli_joc = {
    "Piatra":{"Hartie":"pierde","Foarfeca":"castiga"},
    "Hartie":{"Foarfeca":"pierde","Piatra":"castiga"},
    "Foarfeca":{"Piatra":"pierde","Hartie":"castiga"},
}

score = {
    "Utilizator":0,
    "Calculator":0,
    "Egaluri":0,
}
scor = f"Utilizator scor: {score['Utilizator']}\nCalculator scor: {score['Calculator']}\nEgaluri: {score['Egaluri']}"
label_scorjoc = Label(afisaj, text=scor, fg="blue")
label_scorjoc.pack(side="top")
def joc(alegereUtilizator):
    optiuni_de_joc = list(reguli_joc.keys())
    alegereCalculator = random.choice(optiuni_de_joc)
    mesaj = f"Calculatorul a ales {alegereCalculator}\n"
    if alegereUtilizator == alegereCalculator:
        score["Egaluri"] += 1
        mesaj += "Egalitate"
        messagebox.showinfo("Egalitate", mesaj)
    else:
        rez = reguli_joc[alegereUtilizator][alegereCalculator]
        if rez == "castiga":
            score["Utilizator"] += 1
            mesaj += "Ai castigat!"
            messagebox.showinfo("Ai castigat!", mesaj)
        else:
            score["Calculator"] += 1
            mesaj += "Ai pierdut!"
            messagebox.showinfo("Ai pierdut!", mesaj)
    scor = f"Utilizator scor:{score['Utilizator']}\nCalculator scor:{score['Calculator']}\nEgaluri:{score['Egaluri']}"
    label_scorjoc.config(text = scor)
    if score["Utilizator"] > 2 or score["Calculator"] > 2:
        if score["Utilizator"] > score["Calculator"]:
            mesaj = "Ai castigat meciul!"
            messagebox.showinfo("Ai castigat!", mesaj)
        else:
            mesaj = "Ai pierdut meciul!"
            messagebox.showinfo("Ai pierdut!", mesaj)
        afisaj.destroy()

buton_piatra = Button(afisaj, text="Piatra", command=lambda:joc("Piatra"))
buton_piatra.pack(side="left")
buton_hartie = Button(afisaj, text="Hartie", command=lambda:joc("Hartie"))
buton_hartie.pack(side="left")
buton_foarfeca = Button(afisaj, text="Foarfeca", command=lambda:joc("Foarfeca"))
buton_foarfeca.pack(side="left")

afisaj.mainloop()