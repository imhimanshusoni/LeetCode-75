## USING BITWISE XOR OPERATOR (USING CONSTANT SPACE)

To utilize this approach, it is essential to comprehend the Bitwise XOR operator. Many individuals with a background in physics, typically at the high school level, are familiar with logic gates. One such gate is the XOR Gate, which states that the output is true only when the inputs are of opposite types. In other words:

A B Y

0 0 0

0 1 1

1 0 1

1 1 0


We extend this gate's concept to our bitwise XOR operator. When we perform "a^b," it means that we are applying the XOR gate to the two numbers in a bitwise manner, considering each corresponding bit of the numbers. Similarly, we can observe the following:

A^A = 0
A^B^A = B
(A^A^B) = (B^A^A) = (A^B^A) = B

This demonstrates that the position of the elements doesn't matter. Additionally, if we consider "a^a^a........." (even times), it equals 0, and "a^a^a........" (odd times) equals "a." For further details, you can search for it on Google.

Based on the aforementioned observations, we can apply the following steps:

1. Traverse the array and perform the Bitwise XOR operation on each element.
2. Return the resulting value.

Why does this approach work? It works because elements with a frequency of 2 will result in 0, while the element with a frequency of 1 will generate the answer.
