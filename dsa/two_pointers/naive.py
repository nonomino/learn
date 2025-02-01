def two_sum(arr, target):
    l = list()
    d = dict()
    for i in range(len(arr) - 1):
        sum = arr[i] + arr[i + 1]
        d[sum] = str(arr[i]) + ", " + str(arr[i+1])
        l.append(sum)
    for i in l:
        if i == target:
            print("target exists")
            print("the pair is", d[target])
            break
        print("Target not found")

two_sum([1,2,3,4,5], 9)
two_sum([1,2,3,4,5], 11)

