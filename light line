#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <cassert>
#include <cstring>

class LightString {
public:
    // Добавьте недостающие методы
    LightString() = default;
    LightString(const char* tmp) : data(nullptr), size(0) {
        if (tmp != nullptr) {
            size = std::strlen(tmp);
            data = new char[size + 1];
            std::memcpy(data, tmp, size + 1);
        }
    }
    LightString(const LightString& tmp) : data(nullptr), size(0) {
        if (tmp.data != nullptr) {
            size = std::strlen(tmp.data);
            data = new char[size + 1];
            std::memcpy(data, tmp.data, size + 1);
        }
    }
    ~LightString() 
    { 
            delete[] data;
    }
    char& operator[](size_t index) {
        return data[index];
    }
    char& at(size_t index) {
        if (index >= size)
            throw std::out_of_range("index out of range");
        return data[index];
    }
    const char& operator[](size_t index) const {
        return data[index];
    }
    const char& at(size_t index) const {
        if (index >= size)
            throw std::out_of_range("index out of range");
        return data[index];
    }
    LightString& operator=(const LightString& other) {
        if (this == &other)
            return *this;

        Clear();

        if (this != &other && other.data != nullptr) {
            
            size = other.size;
            data = new char[size + 1];
            std::memcpy(data, other.data, size + 1);
        }
        return *this;
    }
    bool operator==(const LightString& other) const noexcept {
        if (other.data == nullptr && data == nullptr)
            return 1;
        if (data == nullptr && other.data != nullptr)
            return 0;
        if (data != nullptr && other.data == nullptr)
            return 0;
        return strcmp(data, other.data) == 0;
    }
    bool operator!=(const LightString& other) const noexcept {
        return strcmp(data, other.data) != 0;
    }
    bool operator<(const LightString& other) const noexcept {
        if (data == nullptr && other.data == nullptr)
            return 0;
        if (data == nullptr && other.data != nullptr)
            return 1;
        if (data != nullptr && other.data == nullptr)
            return 0;
        return strcmp(data, other.data) < 0;
    }
    bool operator>(const LightString& other) const noexcept {
        if (data == nullptr && other.data == nullptr)
            return 0;
        if (data == nullptr && other.data != nullptr)
            return 0;
        if (data != nullptr && other.data == nullptr)
            return 1;
        return strcmp(data, other.data) > 0;
    }
    size_t Size() const noexcept
    {
        return size;
    }
    void Clear() noexcept {
            delete[] data;
            data = nullptr;
            size = 0;
    }
    const char* C_str() const noexcept {
        return data;
    }
private:
    char* data = nullptr;
    size_t size = 0;
};
