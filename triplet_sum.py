def tripletSum(arr, target):
    ans = []
    n = len(arr)

    for i in range(n-2):
        for j in range(i+1, n-1):
            for k in range(j+1, n):
        
                if arr[i] + arr[j] + arr[k] == target:
                    temp_lst = [arr[i], arr[j], arr[k]]
                    temp_lst.sort()
                    
                    temp_str = "".join([str(i) for i in temp_lst])
                    if temp_str not in ans: ans.append(temp_str)
                    break
    
    return [list(map(int, str(i))) for i in ans] if ans != [] else -1
    




arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
target = 10
print(tripletSum(arr, target))


arr = [1, 2, 3, 1, 2, 3]
target = 7
print(tripletSum(arr, target))


arr = [1, 2, 3, 4]
target = 4
print(tripletSum(arr, target))


arr = [1, 1, 2, 2, 1, 1]
target = 4
print(tripletSum(arr, target))


arr = [10, 5, 5, 5, 2]
target = 12
print(tripletSum(arr, target))


arr = [6, 8, 1, 3, 5]
target = 13
print(tripletSum(arr, target))

