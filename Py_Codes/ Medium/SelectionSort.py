####################################################################
# Selection Sort:                                                  #
# Finds the minimum element in the unsorted part of the array and  #
# puts it in it's position in the sorted part of the array.        #
# 1) Time Complexity: O(n^2)                                       #
# 2) Space Complexity: O(1)                                        #
####################################################################

def selectionSort(arr):
    for i in range(len(arr)-1):
        #initially we take i as index that has the minimum value
        minIndex = i 
        #then we search the part of the array after this index
        for j in range(i+1, len(arr)):  
            #if we find an index whose value is less than that at min then
            if arr[j]<arr[minIndex]: 
                #we assign this index as the index that has the minimum value 
                minIndex = j  
        #after the this loop we place the element at min index at its respective position
        arr[minIndex], arr[i] = arr[i], arr[minIndex]

A = list(map(int, input('Please enter your array:\n').split())) #enter array as space separated integers
print('\nThe array after selection sort is: \n') 
selectionSort(A)
print(A)

