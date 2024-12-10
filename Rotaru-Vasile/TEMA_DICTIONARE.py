def afisare_dictionar():
    masina = {"Marca": "BMW", "Model": "X5", "An": 2020, "Culoare": "Negru"}
    for cheie, valoare in masina.items():
        print(cheie, valoare)

def lista_masini():
    masini = [
        {"Marca": "BMW", "Model": "X5", "An": 2020, "Culoare": "Negru"},
        {"Marca": "Audi", "Model": "A4", "An": 2018, "Culoare": "Alb"},
        {"Marca": "Tesla", "Model": "Model 3", "An": 2022, "Culoare": "Gri"}
    ]

    for masina in masini:
        for cheie, valoare in masina.items():
            print(cheie, valoare)

def cautare_masina():
    masini = [
        {"Marca": "BMW", "Model": "X5", "An": 2020, "Culoare": "Negru"},
        {"Marca": "Audi", "Model": "A4", "An": 2018, "Culoare": "Alb"},
        {"Marca": "Tesla", "Model": "Model 3", "An": 2022, "Culoare": "Gri"}
    ]

    
    for masina in masini:
        if masina["Marca"] == "Audi":
            print(masina)
            break

    
    masini_gri = [masina for masina in masini if masina["Culoare"] == "Gri"]
    print(masini_gri)


afisare_dictionar()
lista_masini()
cautare_masina()
