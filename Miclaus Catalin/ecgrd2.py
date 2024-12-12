import math

def rezolva_ecuatia_grad2(a, b, c):
    # Verificăm dacă ecuația este validă
    if a == 0:
        if b == 0:
            if c == 0:
                return "Ecuația are o infinitate de soluții."
            else:
                return "Ecuația nu are soluții."
        else:
            # Ecuație de gradul 1: bx + c = 0
            x = -c / b
            return f"Ecuația are o soluție: x = {x}"
    
    # Calculăm discriminantul
    delta = b**2 - 4*a*c
    
    if delta < 0:
        return "Ecuația nu are soluții reale."
    elif delta == 0:
        x = -b / (2*a)
        return f"Ecuația are o soluție dublă: x = {x}"
    else:
        x1 = (-b - math.sqrt(delta)) / (2*a)
        x2 = (-b + math.sqrt(delta)) / (2*a)
        return f"Ecuația are două soluții: x1 = {x1}, x2 = {x2}"

# Exemplu de utilizare
a = float(input("Introduceți coeficientul a: "))
b = float(input("Introduceți coeficientul b: "))
c = float(input("Introduceți coeficientul c: "))

rezultat = rezolva_ecuatia_grad2(a, b, c)
print(rezultat)
