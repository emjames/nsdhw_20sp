[x] Develop own matrix-matrix multiplication code
[ ] Measure runtime
[ ] Compare with BLAS ``DGEMM`` subroutine
[ ] Matrix size should be larger than or equal to ``1000x1000``

[x] Develop a two-dimensional matrix class (you may reuse the code in the 
  course
   note) in C++.  (2 points)
[x] Implement a free function performing naive matrix-matrix multiplication.
[x] Name it ``multiply_naive()``.
[ ] Implement another free function that uses ``DGEMM`` for the
    multiplication.  Name it ``multiply_mkl()``.

Python 
[ ] Make Python unit tests for the C++ matrix class and multiplication 
    functions.  (1 point)
[ ] Use the same names in Python.
[ ] The unit tests should support py.test.
[ ] ``make test`` should run the same unit tests.

[ ] Make sure the answers from the two multiplication functions match.  
  (1 point)
[ ] Time the two multiplication functions and compare the performance. 
  Then output ``performance.txt``. 
  The format of ``performance.txt`` can be any. Just make it reasonable. 
  (1 point)

