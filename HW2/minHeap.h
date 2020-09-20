#ifndef HW2_MINHEAP_H
#define HW2_MINHEAP_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

template <class T>
class minHeap
{
private:

    T lastEntry;

    vector <T> heap;
    int left(int parent);
    int right(int parent);
    int parent(int child);
    void heapifyup(int index);
    void heapifydown(int index);
    bool hasLeft(int position);
    bool hasRight(int position);

public:
    minHeap<T>()
    {}
    void insert(T element);
    void deleteMin();
    T extractMin();
    void displayHeap();
    int sizeOfHeap();
    T getLast();
    bool isRoot(T r);
    T getRoot();
      
};

#endif