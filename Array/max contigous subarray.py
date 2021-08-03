def Largest_subarray_sum(arr,l): 
    b= arr[0] 
    for i in range(1,l): 
        b = max(arr[i], b + arr[i]) 
        a = max(a,b)
    return a 
  

arr = [] 
l=int(input("Enter the length of the array :"))
for i in range(l):
    ele=int(input("Enter elements : "))
    arr.append(ele)
print("Maximum contiguous sum is" , Largest_subarray_sum(arr,l))
