from random import randint

maxSize = 10
arr = [0]*maxSize
maxRandInt2 = maxSize*2
for i in range(0,maxSize):
    arr[i] = randint(0,maxRandInt2)
    print(arr[i],end = ",")

x = randint(0,maxRandInt2)
print("\nx =",x)
are = False;
for i in range(0, maxSize):
    if (arr[i] == x):
        are = True;
        print("Nr.",x,"exista pe indexul: ", i)

if not are:
    print("Nu exista in lista")