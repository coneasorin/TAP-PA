import math
import random
import numpy as np

def radixSort(arr):
    length = len(arr)
    maxN = max(arr)
    exp = 1
    while maxN // exp > 0:
        output = [0] * length
        count = [0] * 10

        for i in range(length):
            index = arr[i] // exp
            count[index % 10] += 1

        for i in range(0, 9):
            count[i + 1] += count[i]

        for i in range(length - 1, -1, -1):
            index = arr[i] // exp
            output[count[index % 10] - 1] = arr[i]
            count[index % 10] -= 1

        for i in range(length):
            arr[i] = output[i]
        exp *= 10


def main():
    arr = []
    inp1 = input("Introduce un nr (nr ales * 2 v-a fi valoarea maxima posibila in lista): ")
    for i in range(int(inp1)):
        arr.append(random.randint(1, int(inp1)*2))
    radixSort(arr)
    print(arr)

main()