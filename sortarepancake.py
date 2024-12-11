import random
def flip(arr, i):
    """Reverse the array from the start to index i."""
    start = 0
    while start < i:
        arr[start], arr[i] = arr[i], arr[start]
        start += 1
        i -= 1
def find_max_index(arr, n):
    """Find the index of the maximum value in arr[0:n]."""
    max_idx = 0
    for i in range(n):
        if arr[i] > arr[max_idx]:
            max_idx = i
    return max_idx
def pancake_sort(arr):
    """Sort an array using the pancake sorting algorithm."""
    n = len(arr)
    for curr_size in range(n, 1, -1):
        # Find the index of the maximum element in arr[0:curr_size]
        max_idx = find_max_index(arr, curr_size)

        # If the maximum element is not at its correct position
        if max_idx != curr_size - 1:
            # Flip the maximum element to the front
            flip(arr, max_idx)
            # Flip it to its correct position
            flip(arr, curr_size - 1)
def main():
    random.seed()
    max_sz = int(input("Nr Max de valori: "))
    arr = [random.randint(0, max_sz * 10) for _ in range(max_sz)]

    print("Initial array:", arr)
    pancake_sort(arr)
    print("Sorted array:", arr)
if __name__ == "__main__":
    main()
