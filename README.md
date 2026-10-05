# gpu-tensor-engine
A bare-metal C++ and CUDA tensor engine built from scratch to explore low-level memory management, custom tensor operations, and GPU hardware acceleration without high-level framework abstractions.

## Core Architecture Goals
- **Custom Memory Allocator:** Explicit CPU/GPU memory management, allocation, and tracking to eliminate hidden overhead.
- **Core Tensor Operations:** Implementing fundamental forward passes (matrix multiplication, element-wise ops, activations) from mathematical first principles.
- **CUDA Kernel Optimization:** Writing custom CUDA kernels for parallelized thread-block execution and reduction operations.

## 🛠️ Current Development Roadmap

- [x] **Phase 1:** Core CPU Tensor Data Structures & Contiguous Memory Layout
- [ ] **Phase 2:** Basic Arithmetic & Matrix Multiplication Operations
- [ ] **Phase 3:** CUDA Integration & Custom Kernel Writing
- [ ] **Phase 4:** Benchmarking & Latency Optimization
- [ ] **Phase 5:** Automatic Differentiation (Autograd Engine)
- [ ] **Phase 6:** Neural Network Operators & Activation Functions
- [ ] **Phase 7:** End-to-End Deep Learning Training Demonstration