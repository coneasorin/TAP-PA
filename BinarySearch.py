def cautare_TipKGB_Binar(lista,victima):
    mic,mare = 0,len(lista)-1;

    while mic <= mare:
        miciloc = (mic + mare) // 2

        if lista[miciloc] == victima:
            return miciloc
        elif lista[miciloc] < victima:
            mic = miciloc + 1
        else:
            mare = miciloc - 1

    return -1

sz = int(input("Marimea listei: "))
ls = [0] * sz
for i in range(sz):
    ls[i] = i;

# with open("lista.txt",'r') as file:
#     randurile = file.readline()
#     shir = list(map(int,randurile.split()))

vct = int(input("Numarul care vrei sa il cauti: "))
rez = cautare_TipKGB_Binar(ls,vct)
if rez == -1:
    print(f"Elementul {vct} nu poate fi gasit.")
else:
    print(f"Elementul {vct} a fost gasit pe indexul: {rez}.")
