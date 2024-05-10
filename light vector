#include <iostream>

template <typename T, size_t N>
class LightVector {
public:
    explicit LightVector(size_t a_size = 0) {
        if (a_size > N) {
            throw std::invalid_argument("Size exceeds capacity");
        }
        size_ = a_size;
    }

    T& operator[](size_t index) {
        return data_[index];
    }

    const T& operator[](size_t index) const {
        return data_[index];
    }

    using iterator = T*;
    using const_iterator = const T*;

    iterator begin() {
        return data_;
    }

    iterator end() {
        return data_ + size_;
    }

    const_iterator begin() const {
        return data_;
    }

    const_iterator end() const {
        return data_ + size_;
    }

    size_t Size() const {
        return size_;
    }

    size_t Capacity() const {
        return N;
    }

    void PushBack(const T& value) {
        if (size_ >= N) {
            throw std::overflow_error("Stack overflow!");
        }
        data_[size_] = value;
        size_++;
    }

    T PopBack() {
        if (size_ == 0) {
            throw std::underflow_error("Stack underflow!");
        }
        size_--;
        return data_[size_];
    }

private:
    T data_[N];
    size_t size_;
};
