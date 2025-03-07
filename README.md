

               PPPP   U   U  SSSSS  H   H      SSSSS    SSSSS  W   W   AAAAA  PPPP
               P   P  U   U  S      H   H      S        S      W   W  A     A P   P
               PPPPP  U   U  SSSSS  HHHHH      SSSSS    SSSSS  W W W  AAAAAAA PPPP
               P      U   U      S  H   H          S        S  W W W  A     A P
               P      UUUUU  SSSSS  H   H      SSSSS    SSSSS  W   W  A     A P

Push_swap is a sorting challenge where I had to sort a stack of numbers using only a limited set of operations while minimizing the number of moves. The project consists of two stacks: A, which starts with all the numbers, and B, which serves as temporary storage. Since I couldn't use standard sorting algorithms, I had to carefully plan each move to achieve the most efficient solution.

Allowed Moves
To manipulate the stacks, I used the following operations:

Swap: sa (swap the first two elements of A), sb (swap B), ss (swap both).
Push: pa (move the top element from B to A), pb (move from A to B).
Rotate: ra (move the top element of A to the bottom), rb (rotate B), rr (rotate both).
Reverse Rotate: rra (move the bottom element of A to the top), rrb (reverse rotate B), rrr (reverse rotate both).
The Chunks Algorithm
To efficiently sort the numbers, I used a method called "chunks." Instead of handling all numbers at once, I divided them into smaller groups or chunks based on their values. I then moved these chunks strategically between stacks, ensuring that the smallest elements were pushed to B first while keeping their relative order intact. Once all chunks were correctly positioned, I pushed them back into A in sorted order. This approach helped minimize unnecessary moves, making the sorting process much more efficient.

This project pushed me to think algorithmically and optimize every step, ensuring that my sorting solution was as fast and efficient as possible.
