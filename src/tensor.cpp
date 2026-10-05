#include "tensor.h"
#include <iostream>

// Constructor: Allocates the memory
Tensor::Tensor(int r, int c) {
    rows = r;
    cols = c;
    data = new float[rows * cols]; // Asks the CPU for raw memory
}

// Destructor: Frees the memory (Prevents Memory Leaks)
Tensor::~Tensor() {
    delete[] data; // Hands the memory back to the CPU
}

// Fills the tensor
void Tensor::fill(float value) {
    int total = rows * cols;
    for(int i = 0; i < total; i++) { 
        data[i] = value;
    }
}

// Prints the tensor
void Tensor::print() const {
    for(int i = 0; i < rows; i++) {
        std::cout << "[";
        for(int j = 0; j < cols; j++) {
            std::cout << data[i * cols + j] << " ";
        }
        std::cout << "]\n";
    }
}
// Adds another tensor to this one element-by-element
void Tensor::add(const Tensor& other) {
    int total = rows * cols;
    for(int i = 0; i < total; i++) {
    data[i] = data[i] + other.data[i];
        // Write the math right here. 
        // Update data[i] by adding other.data[i] to it.
        
    }
}