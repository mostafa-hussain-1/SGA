#pragma once
#include<iostream>
using namespace std;
template <typename D>

class SGA_array {
    private: 
        D* data;
        int _size;
        int capacity;
    public:
        SGA_array(){
            _size = 0;
            capacity = 1;
            data = new D[capacity];
        }
    void push_back (D value){
        if (_size == capacity)
        {
            capacity *= 2;
            D* newData = new D[capacity];
            for (int i = 0; i < _size; i++)
            {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
        }
        data[_size] = value;
        _size++;
    }
    void pop_back (){
        _size--;
    }
    bool empty (){
        return _size == 0;
    }
    void clear(){
        _size = 0;
    }
    void resize (int value){
        _size = value;
    }
    D& operator[] (int index){
        return data[index];
    }
    int size(){
        return _size;
    }
    void erase (int index){
        D* newData = new D[capacity];
        int idx = 0;
        for (int i = 0; i < _size - 1; i++, idx++)
        {
            if (i == index) idx++;
            newData[i] = data[idx];
        }
        delete[] data;
        data = newData;
        _size--;
    }
    void loop (int start, int stop, int steps){
        for (int i = start; i < stop; i+= steps)
        {
            cout << data[i] << ' ';
        }
        cout << endl;
    }
};