# Kth-Largest
Find the k(th) largest element in an unsorted vector and return that value.

1. without sorting the vector

2. the input vector does not have duplicate values

Input: [0,2,1,5,6,3] and k = 2

Output: 5 (because the largest is 6, and the second largest is 5)

Input: [-2, 3,-1,2,5,6,10] and k =3

Output: 5 (because the largest is 10, 2nd largest is 6, and 3rd largest is 5)

Run with
```
bazel run src/main:main
```

Test with
```
bazel test tests:tests
```
