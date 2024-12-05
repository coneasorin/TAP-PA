from tkinter import *
from tkinter import messagebox
import random

# Determina winner
def determine_winner(user_choice, computer_choice):
    if user_choice == computer_choice:
        return "Draw"
    elif (user_choice == "Piatra" and computer_choice == "Hartie") or \
         (user_choice == "Hartie" and computer_choice == "Foarfeca") or \
         (user_choice == "Foarfeca" and computer_choice == "Piatra"):
        return "Computer Wins"
    else:
        return "You Win"

# User click - 
def user_choice(choice):
    # Randomly generate the computer's choice
    computer_choice = random.choice(["Piatra", "Hartie", "Foarfeca"])
    
    # Determine the result
    result = determine_winner(choice, computer_choice)
    
    # Display the result in a message box
    messagebox.showinfo("Rezultatul Jocului", f"Tu ai ales {choice}\nCalculatorul a ales {computer_choice}\n\n{result}")

# creeaza fereastra pricipala
afisaj = Tk()
afisaj.title("Piatra, Hartie, Foarfeca")

# Game Rules
reguli = """Regulile jocului sunt:
Piatra vs Hartie -> Hartie
Piatra vs Foarfeca -> Piatra
Hartie vs Foarfeca -> Foarfeca"""

# Creeaza eticheta de display rules
label_reguli_joc = Label(afisaj, text=reguli, fg="red")
label_reguli_joc.pack(side="top", padx=10, pady=10)

# butoane pentru Piatra Hartie Foarfec
button_piatra = Button(afisaj, text="Piatra", width=20, command=lambda: user_choice("Piatra"))
button_piatra.pack(side="left", padx=10)

button_hartie = Button(afisaj, text="Hartie", width=20, command=lambda: user_choice("Hartie"))
button_hartie.pack(side="left", padx=10)

button_foarfeca = Button(afisaj, text="Foarfeca", width=20, command=lambda: user_choice("Foarfeca"))
button_foarfeca.pack(side="left", padx=10)

# main loop
afisaj.mainloop()
