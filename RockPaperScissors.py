from tkinter import *
from tkinter import messagebox
import random

afisaj = Tk()

afisaj.title("RPS")
#afisaj.geometry("150x150")
reguli = ("Game rules:\n"
          "Rock vs. Paper -> Paper\n"
          "Rock vs. Scissors -> Rock\n"
          "Paper vs. Scissors -> Scissors\n")

label_reguli_joc = Label(afisaj, text=reguli,fg = "red")
label_reguli_joc.pack(side="top")

reguli_joc = {
    "Rock":{"Paper":"loss","Scissors":"win"},
    "Paper":{"Scissors":"loss","Rock":"win"},
    "Scissors":{"Rock":"loss","Paper":"win"},
}

score = {
    "User":0,
    "Computer":0,
    "Ties":0,
}
scor = f"User Score:{score['User']}\nComputer Score:{score['Computer']}\nTies:{score['Ties']}"
label_scorJoc = Label(afisaj, text=scor, fg="red")
label_scorJoc.pack(side="top")
def joc(alegereUtilizator):
    optDeJoc = list(reguli_joc.keys())
    alegereCalculator = random.choice(optDeJoc)
    mesaj = f"Computer has chosen {alegereCalculator}!\n"
    if alegereUtilizator == alegereCalculator:
        score["Ties"] += 1
        mesaj += "Tie"
        messagebox.showinfo("Tie", mesaj)
    else:
        rez = reguli_joc[alegereUtilizator][alegereCalculator]
        if rez == "win":
            score["User"] += 1
            mesaj += "You won!"
            messagebox.showinfo("You won! Lucky.", mesaj)
        else:
            score["Computer"] += 1
            mesaj += "You lost!"
            messagebox.showinfo("You lost! Loser!", mesaj)
    scor = f"User Score:{score['User']}\nComputer Score:{score['Computer']}\nTies:{score['Ties']}"
    label_scorJoc.config(text = scor)
    if score["User"] > 2 or score["Computer"] > 2:
        if score["User"] > score["Computer"]:
            mesaj = "You won the whole match! HOW???"
            messagebox.showinfo("You won!", mesaj)
        else:
            mesaj = "You lost the whole match! LMAO???"
            messagebox.showinfo("You Lost!", mesaj)
        afisaj.destroy()

buton_piatra = Button(afisaj, text="Rock", command=lambda:joc("Rock"))
buton_piatra.pack(side="left")

buton_hartie = Button(afisaj, text="Paper", command=lambda:joc("Paper"))
buton_hartie.pack(side="left")

buton_forfec = Button(afisaj, text="Scissors", command=lambda:joc("Scissors"))
buton_forfec.pack(side="left")

afisaj.mainloop()