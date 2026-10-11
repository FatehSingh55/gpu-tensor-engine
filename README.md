# gpu-tensor-engine

Building a bare-metal tensor engine from scratch in C++ and CUDA. The goal of my project is to actually understand memory management, pointers, and how hardware works instead of just relying on Python libraries.

## Current Focus
* Figuring out how to  allocate and free memory on the heap without crashing the program.
* Learning how to represent a 2D matrix as a flat 1D array in memory to make it run faster on the CPU cache.
* Trying to execute the project with splitting into phases for a clean workspace enviorment and clean goal. 

## The 7-Phase Roadmap
- [x] Phase 1: Basic C++ setup, pointers, and 1D contiguous memory allocation
- [ ] Phase 2: CPU matrix math (addition, multiplication) and operator overloading
- [ ] Phase 3: CUDA basics and moving data between CPU and GPU
- [ ] Phase 4: Writing custom CUDA kernels for parallel matrix multiplication
- [ ] Phase 5: Figuring out automatic differentiation (building an autograd engine)
- [ ] Phase 6: Implementing standard neural network layers (ReLU, Linear)
- [ ] Phase 7: Full end-to-end training loop demonstration
