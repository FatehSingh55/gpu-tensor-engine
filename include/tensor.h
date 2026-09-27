#pragma once

class Tensor {
private:
        int rows;
        int cols;
        float* data;

public:
    Tensor(int r, int c );
    ~Tensior();
};
