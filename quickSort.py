def partition(a,p,r):
    X = a[r]
    i = p - 1
    j = p
    while(j<r):
        if(a[j]<X):
            i = i + 1
            temp = a[j]
            a[j] = a[i]
            a[i] = temp
        j = j + 1
    temp = a[i+1]
    a[i+1] = a[r]
    a[r] = temp
    return(i+1)

def quickSort(a,p,r):
    if(p<r):
        q = partition(a,p,r)
        quickSort(a,p,q-1)
        quickSort(a,q+1,r)

arr = [4,2,1,5,6]
quickSort(arr,0,4)
print(arr)
