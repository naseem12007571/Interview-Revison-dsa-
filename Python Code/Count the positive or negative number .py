
arr = [12, 3, -4, -5, 6, 4, 55, 3, -2, -33, -545]

posCount = 0
negCount = 0


for i in range(len(arr)): 
    if arr[i] >= 0:
        posCount += 1
    else:
        negCount += 1


print("Positive count is", posCount)
print("Negative count is", negCount)
