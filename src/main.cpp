#include "tensor.h"
#include <iostream>

int main() {
    // Create first tensor and fill with 5.0
    Tensor tensorA(3, 3);
    tensorA.fill(5.0);

    // Create second tensor and fill with 2.0
    Tensor tensorB(3, 3);
    tensorB.fill(2.0);

    // Add B to A
    tensorA.add(tensorB);

    // Print the result (should be 7s)
    tensorA.print();

    return 0;
}