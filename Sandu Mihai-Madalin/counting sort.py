from random import randint

def sortare_numarare(lista):
    mx = max(lista);
    numarare_lista = [0] * (mx+1);
    for n in lista:
        numarare_lista[n] += 1;

    for i in range(1,mx+1):
        numarare_lista[i] += numarare_lista[i-1];

    inafara_listei = [0] * len(lista);

    for i in range(len(lista)-1,-1,-1):
        inafara_listei[numarare_lista[lista[i]]-1] = lista[i];
        numarare_lista[lista[i]] -= 1;

    return inafara_listei;

def main():
    maxy = int(input("Nr. Max: "));
    ls = [0] * (maxy+1);
    for i in range(maxy):
        ls[i] = randint(0,maxy*2);
        print(ls[i],end = ",");
    print("")

    lista_obt = sortare_numarare(ls);

    for i in lista_obt:
        print(i,end = ",");

    print("")



main()