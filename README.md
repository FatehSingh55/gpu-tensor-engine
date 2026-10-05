# gpu-tensor-engine
A bare-metal C++ and CUDA tensor engine built from scratch to explore low-level memory management, custom tensor operations, and GPU hardware acceleration without high-level framework abstractions.

## Core Architecture Goals
- **Custom Memory Allocator:** Explicit CPU/GPU memory management, allocation, and tracking to eliminate hidden overhead.
- **Core Tensor Operations:** Implementing fundamental forward passes (matrix multiplication, element-wise ops, activations) from mathematical first principles.
- **CUDA Kernel Optimization:** Writing custom CUDA kernels for parallelized thread-block execution and reduction operations.

## Planned Roadmap
## Planned Roadmap

| Phase | Description | Status |
| :--- | :--- | :--- |
| **Phase 1** | Core CPU Tensor Data Structures & Contiguous Memory Layout | ![Completed](https://img.shields.io/badge/Status-Complete-success?style=flat-square) |
| **Phase 2** | Basic Arithmetic & Matrix Multiplication Operations | ![In Progress](https://img.shields.io/badge/Status-In_Progress-blue?style=flat-square) |
| **Phase 3** | CUDA Integration & Custom Kernel Writing | ![Pending](https://img.shields.io/badge/Status-Pending-lightgrey?style=flat-square) |
| **Phase 4** | Benchmarking & Latency Optimization | ![Pending](https://img.shields.io/badge/Status-Pending-lightgrey?style=flat-square) |
