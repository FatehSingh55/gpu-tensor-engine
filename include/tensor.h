#pragma once

class Tensor {
private:
        int rows;
        int cols;
        float* data;

public:
    Tensor(int r, int c );
    ~Tensor();

    float& at(int r, int c);
    void fill(float value);
    void print() const;
};
