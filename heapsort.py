from random import randint
def heapuire(tab,n,i):
    larg = i;
    l = 2 * i + 1;
    r = 2 * i + 2;
    if l < n and tab[l] > tab[larg]:
        larg = l;
    if r < n and tab[r] > tab[larg]:
        larg = r;
    if larg != i:
        tab[i],tab[larg] = tab[larg],tab[i];
        heapuire(tab,n,larg);
def sortarePrinHeapuire(tab):
    leng = len(tab)
    for idx in range(leng // 2 - 1,-1,-1):
        heapuire(tab,leng,idx)

    for ix in range(leng - 1,0,-1):
        tab[0],tab[ix] = tab[ix],tab[0]
        heapuire(tab,ix,0)
if __name__ == '__main__':
    rngNum = int(input('Introduce un numar: '))
    tab = [0] * rngNum
    for i in range(rngNum):
        tab[i] = randint(0, rngNum*2)
    sortarePrinHeapuire(tab)
    print(tab)