def afisare_dictionar():
    masina = {"Marca": "Skoda", "Model": "Octavia", "An": 2021, "Culoare": "Gri"}
    for cheie, val in masina.items():
        print(cheie, val)

def lista_masini():
    masini = [
        {"Marca": "Skoda", "Model": "Octavia", "An": 2021, "Culoare": "Gri"},
        {"Marca": "Renault", "Model": "Laguna", "An": 2011, "Culoare": "Verde"},
        {"Marca": "Honda", "Model": "Jazz", "An": 2007, "Culoare": "Albastru"},
        {"Marca": "Opel", "Model": "Astra K", "An": 2018, "Culoare": "Rosu"}
    ]

    for masina in masini:
        for cheie, val in masina.items():
            print(cheie, val)

def cautare_masina():
    masini = [
        {"Marca": "Skoda", "Model": "Octavia", "An": 2021, "Culoare": "Gri"},
        {"Marca": "Renault", "Model": "Laguna", "An": 2011, "Culoare": "Verde"},
        {"Marca": "Honda", "Model": "Jazz", "An": 2007, "Culoare": "Albastru"},
        {"Marca": "Opel", "Model": "Astra K", "An": 2018, "Culoare": "Rosu"}
    ]

    for masina in masini:
        if masina["Marca"] == "Honda":
            print(masina)
            break
  
    masina_rosie = [masina for masina in masini if masina["Culoare"] == "Rosu"]
    print(masina_rosie)

afisare_dictionar()
lista_masini()
cautare_masina()