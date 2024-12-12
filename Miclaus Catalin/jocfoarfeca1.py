from tkinter import *
from tkinter import messagebox
import random

# Determinam castigatorul
def determine_winner(user_choice, computer_choice):
    if user_choice == computer_choice:
        return "Draw"
    elif (user_choice == "Piatra" and computer_choice == "Hartie") or \
         (user_choice == "Hartie" and computer_choice == "Foarfeca") or \
         (user_choice == "Foarfeca" and computer_choice == "Piatra"):
        return "COMPUTERUL A CASTIGAT"
    else:
        return "AI CASTIGAT"

# Function atasata la user click
def user_choice(choice):
    # genereaza random alegerea computerului
    computer_choice = random.choice(["Piatra", "Hartie", "Foarfeca"])
    
    # Determinam rezultatul
    result = determine_winner(choice, computer_choice)
    
    # Afisam rezultatul in messagebox
    messagebox.showinfo("Rezultatul Jocului", f"Tu ai ales {choice}\nCalculatorul a ales {computer_choice}\n\n{result}")

# Creaza main window
afisaj = Tk()
afisaj.title("Piatra, Hartie, Foarfeca")

# Defineste regulile jocului
reguli = """Regulile jocului sunt:
Piatra vs Hartie -> Hartie
Piatra vs Foarfeca -> Piatra
Hartie vs Foarfeca -> Foarfeca"""

# Creeaza o eticheta sa afisezi regulile jocului
label_reguli_joc = Label(afisaj, text=reguli, fg="red")
label_reguli_joc.pack(side="top", padx=10, pady=10)

# Butoane pentru Piatra Hartie Foarfeca
button_piatra = Button(afisaj, text="Piatra", width=20, command=lambda: user_choice("Piatra"))
button_piatra.pack(side="left", padx=10)

button_hartie = Button(afisaj, text="Hartie", width=20, command=lambda: user_choice("Hartie"))
button_hartie.pack(side="left", padx=10)

button_foarfeca = Button(afisaj, text="Foarfeca", width=20, command=lambda: user_choice("Foarfeca"))
button_foarfeca.pack(side="left", padx=10)

# ruleaza main
afisaj.mainloop()
