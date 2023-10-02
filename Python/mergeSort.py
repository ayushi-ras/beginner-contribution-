def merge(arr: list[int],s:int,e:int):
    left=list()
    right=list()
    mid=(s+e)//2
    leftLength=mid-s+1
    rightLength=e-mid
    arrayIndex=s
    for i in range(0,leftLength):
       left.append(arr[arrayIndex])
       arrayIndex+=1
    
    arrayIndex=mid+1
    for i in range(0,rightLength):
        right.append(arr[arrayIndex])
        arrayIndex+=1
    
    arrIndex=s
    leftIndex,rightIndex=0,0
    while(leftIndex<len(left) and rightIndex<len(right)):
        if(left[leftIndex]<right[rightIndex]):
            arr[arrIndex]=left[leftIndex]
            arrIndex+=1
            leftIndex+=1
        else:
            arr[arrIndex]=right[rightIndex]
            arrIndex+=1
            rightIndex+=1
        
    while(leftIndex<len(left)):
        arr[arrIndex]=left[leftIndex]
        arrIndex+=1
        leftIndex+=1
    while(rightIndex<len(right)):
        arr[arrIndex]=right[rightIndex]
        arrIndex+=1
        rightIndex+=1
        
    


def mergeSort(arr: list[int],s:int,e: int):
    if(s>=e):
        return
    mid=(s+e)//2
    mergeSort(arr,s,mid)
    mergeSort(arr,mid+1,e)
    merge(arr,s,e)

arr=list(map(int,input().split(' ')))
s=0
e=len(arr)-1
mergeSort(arr,s,e)
print(arr)