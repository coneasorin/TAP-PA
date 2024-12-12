    """inverseaza ordindef flip(arr, k):
ea"""
    arr[:k] = arr[:k][::-1]

def find_max_index(arr, n):
    """Finds the index of the maximum element in the first n elements."""
    max_idx = 0
    for i in range(1, n):
        if arr[i] > arr[max_idx]:
            max_idx = i
    return max_idx

def pancake_sort(arr):
    """Sorts the array using the pancake flipping sort algorithm."""
    n = len(arr)
    for curr_size in range(n, 1, -1):
        # Find the maximum element in the current unsorted part of the array
        max_idx = find_max_index(arr, curr_size)
        
        # If the maximum element is not at its correct position
        if max_idx != curr_size - 1:
            # Bring the maximum element to the beginning if necessary
            if max_idx != 0:
                flip(arr, max_idx + 1)
            
            # Bring the maximum element to its correct position
            flip(arr, curr_size)
    return arr

# Example usage
arr = [3, 6, 2, 4, 8, 1, 5, 7]
print("Original array:", arr)
sorted_arr = pancake_sort(arr)
print("Sorted array:", sorted_arr)
