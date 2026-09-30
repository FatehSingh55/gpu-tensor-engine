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

// Translates 2D coordinates into 1D index
float& Tensor::at(int r, int c) {
    return data[r * cols + c];
}

// Runs through the entire tensor and fills it with a value
void Tensor::fill(float value) {
    int total = rows * cols;
    for(int i = 0; i < rows; i++) {
        data[i] = value;
    }
}

// Prints the numbers to the terminal in a neat grid
void Tensor::print() const {
    for(int i = 0; i < rows; i++) {
        std::cout << "[";
        for(int j = 0; j < cols; j++) {
            std::cout << data[i * cols + j] << " ";
        }
        std::cout << "]\n";
    }
}