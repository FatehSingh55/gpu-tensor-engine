#include "../include/tensor.h"
#include <iostream>

// Constructor: Claiming the memory in RAM
Tensor::Tensor(int r, int c) {
    rows = r;
    cols = c;

    // the physical act of grabbing empty space in RAM
    data = new float[rows * cols];

    std::cout << "Tensor memory allocated!" << std::endl;
}

// Destructor: Giving memory back to computer
Tensor::~Tensor() {
    delete[] data;
    std::cout << "Tensor memory freed!" << std::endl;
}

