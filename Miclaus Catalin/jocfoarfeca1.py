from tkinter import *
from tkinter import messagebox
import random

# Function to determine the winner
def determine_winner(user_choice, computer_choice):
    if user_choice == computer_choice:
        return "Draw"
    elif (user_choice == "Piatra" and computer_choice == "Hartie") or \
         (user_choice == "Hartie" and computer_choice == "Foarfeca") or \
         (user_choice == "Foarfeca" and computer_choice == "Piatra"):
        return "Computer Wins"
    else:
        return "You Win"

# Function to handle user button click
def user_choice(choice):
    # Randomly generate the computer's choice
    computer_choice = random.choice(["Piatra", "Hartie", "Foarfeca"])
    
    # Determine the result
    result = determine_winner(choice, computer_choice)
    
    # Display the result in a message box
    messagebox.showinfo("Rezultatul Jocului", f"Tu ai ales {choice}\nCalculatorul a ales {computer_choice}\n\n{result}")

# Create the main window
afisaj = Tk()
afisaj.title("Piatra, Hartie, Foarfeca")

# Define the game rules
reguli = """Regulile jocului sunt:
Piatra vs Hartie -> Hartie
Piatra vs Foarfeca -> Piatra
Hartie vs Foarfeca -> Foarfeca"""

# Create a label to display the rules
label_reguli_joc = Label(afisaj, text=reguli, fg="red")
label_reguli_joc.pack(side="top", padx=10, pady=10)

# Create buttons for the user to choose between Rock, Paper, or Scissors
button_piatra = Button(afisaj, text="Piatra", width=20, command=lambda: user_choice("Piatra"))
button_piatra.pack(side="left", padx=10)

button_hartie = Button(afisaj, text="Hartie", width=20, command=lambda: user_choice("Hartie"))
button_hartie.pack(side="left", padx=10)

button_foarfeca = Button(afisaj, text="Foarfeca", width=20, command=lambda: user_choice("Foarfeca"))
button_foarfeca.pack(side="left", padx=10)

# Run the main loop
afisaj.mainloop()