import array as arr
arr = arr.array('i', [1,2,3]) 
print("Enter the number of elements of the array : ")
no_of_elements = int(input())

print("Enter the number of rotations of the array : ")
no_of_rotations = int(input())

print("Enter the number of indexes to be displayed : ")
no_to_display = int(input())
print("The array elements are")
for i in range(len(arr)):
    print(arr[i], end = " ")

no_of_rotations %= no_of_elements; 

for i in range(0,no_to_display):
    print("\nEnter the index of the array to be displayed : ")
    index = int(input()) 
    print("\nThe element in the array is ")
    print(arr[(no_of_elements + index - no_of_rotations) % no_of_elements]); 