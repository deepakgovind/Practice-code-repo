# max sum subarray using Kadanes algoritm
# linear time implementation for finding subarray with maximum sum 

def max_subarray(array):
    ''' kadanes algo to find max subarray '''
    
    curr_max = array[0]
    max_sum = array[0]
    for i in array[1:]:
        curr_max = max(curr_max+i, i)
        max_sum = max(max_sum, curr_max)
    return max_sum

# example for input
print(max_subarray([-2, -1, -5, -10, -16]))
