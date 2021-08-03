problem 2: Pythagorean Triplet Write a program to input an array fro the user and checks whether the given triplet satisfies the Pythagorean condition or not.

Pythagorean triplet

Let a, b, c be three integers from the user.

a2 + b2 = c2

Sample Input and Output:

Input:

m=5(Sizeof array)

arr[]={3,1,4,6,5}

Output: True

There is a Pythagorean triplet(3,4,5). //

problem 3 : MAX NO Write a program to input an array of elements from the user and return the possible largest value using the elements.

For example,

if the given numbers are {54, 546, 548, 60}, the arrangement 6054854654 gives the largest value. And if the given numbers are {1, 34, 3, 98, 9, 76, 45, 4}, then the arrangement 998764543431 gives the largest value.

Sample Input and Output:

Input:

4 ->Sizeof an array

54

546

548

60

Output:

6054854654

problem 4: Max contigous subarray Write an program to input a one dimensional array from the user and find the sum of contiguous subarray with the largest sum.

Largest Sum Contiguous Subarray | FACE prep Published on 03 Jul 2020 Write an program to input a one dimensional array from the user and find the sum of contiguous subarray with the largest sum.

Sample input and output:

Input:

8

-2

-3

4

-1

-2

1

5

-3

Output:

Maximum contiguous sum is 7 pr 5: Circular rotation of an array Circular rotation of an array by K positions Circular array rotation means rotating the elements in the array where one rotation operation moves the last element of the array to the first position and shifts all remaining elements to the right.

For example, consider the following array = [4, 5, 6], number of rotations = 2, indexes to be checked = [0,1,2]

Initial array [4, 5, 6] After one rotation [6, 4, 5] After two rotations [5, 6, 4]

OUTPUT

Element at index 0 : 5

Element at index 1 : 6

Element at index 2 : 4

problem 5 : Josephus Problem @ Amazon SDE INTERVIEW

Josephus Problem |

Write a program to solve the Josephus problem.

Explanation:

There are n people standing in a circle waiting to be executed. The counting out begins at some point in the circle and proceeds around the circle in a fixed direction. In each step, a certain number of people are skipped and the next person is executed. The elimination proceeds around the circle (which is becoming smaller and smaller as the executed people are removed), until only the last person remains, who is given freedom. Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle. The task is to choose the place in the initial circle so that you are the last one remaining and so survive.

For example:

if n = 5 and k = 2, then the safe position is 3. Firstly, the person at position 2 is killed, then person at position 4 is killed, then person at position 1 is killed. Finally, the person at position 5 is killed. So the person at position 3 survives.

If n = 7 and k = 3, then the safe position is 4. The persons at positions 3, 6, 2, 7, 5, 1 are killed in order, and person at position 4 survives.

Sample Input and Output:

Input Format:

The input consists of an integer value which is total number of people.

Output Format:

The output consists of an integer value.

Sample Input:

100

2

Sample Output:

73
