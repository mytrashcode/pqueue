#include "minHeap.h" 

using namespace std;

//return size of heap
template <class T>
int minHeap<T>::sizeOfHeap()
{
    return heap.size();
}

//insert element into heap
template <class T>
void minHeap<T>::insert(T element)
{ 
    this->lastEntry = element;
    heap.push_back(element);
    heapifyup(heap.size() - 1);
}

//delete minimum element
template <class T>
void minHeap<T>::deleteMin()
{
    if (heap.size() == 0)
    {
        cout << "Heap is Empty" << endl;
        return;
    }
    heap[0] = heap.at(heap.size() - 1);
    heap.pop_back();
    heapifydown(0);
    cout << "Element Deleted" << endl;
}

//extract the min element in the heap
template <class T>
T minHeap<T>::extractMin()
{
    if (heap.size() == 0)
    {
        return -1;
    }
    else
        return heap.front();
}

//display heap
template <class T>
void minHeap<T>::displayHeap()
{
    class vector<T>::iterator pos = heap.begin(); 
    cout << "Heap: ";
    while (pos != heap.end())
    {
        cout << *pos << " ";
        pos++;
    }
    cout << endl;
}


 // return left child
template <class T>
int minHeap<T>::left(int parent)
{
    int l = 2 * parent + 1;
    if (l < heap.size())
        return l;
    else
        return -1;
}

//check if node has left child
template <class T>
bool minHeap<T>::hasLeft(int position)
{
    int l = 2 * position + 1;
    if (l < heap.size())
        return true;
    else
        return false;
}

//check if node has right child
template <class T>
bool minHeap<T>::hasRight(int position)
{
    int r = 2 * position + 2;
    if (r < heap.size())
        return true;
    else
        return false;
}

//return right child
template <class T>
int minHeap<T>::right(int parent)
{
    int r = 2 * parent + 2;
    if (r < heap.size())
        return r;
    else
        return -1;
}

//return parent
template <class T>
int minHeap<T>::parent(int child)
{
    int p = (child - 1) / 2;
    if (child == 0)
        return -1;
    else
        return p;
}

// heapify up the structure
template <class T>
void minHeap<T>::heapifyup(int in)
{
    if (in >= 0 && parent(in) >= 0 && heap[parent(in)] > heap[in])
    {
        int temp = heap[in];
        heap[in] = heap[parent(in)];
        heap[parent(in)] = temp;
        heapifyup(parent(in));
    }
}

// heapify down the structure
template <class T>
void minHeap<T>::heapifydown(int in)
{

    int child = left(in);
    int child1 = right(in);
    if (child >= 0 && child1 >= 0 && heap[child] > heap[child1])
    {
        child = child1;
    }
    if (child > 0)
    {
        int temp = heap[in];
        heap[in] = heap[child];
        heap[child] = temp;
        heapifydown(child);
    }
}

//return last entry in the heap
template <class T>
T minHeap<T>::getLast(){
    return this->lastEntry;
}

//check if the input is the root
template <class T>
bool minHeap<T>::isRoot(T r){
    if (r.isEqual(heap[0])) {
        return true;
    }
    return false;

}

//get the root
template <class T>
T minHeap<T>::getRoot() {
    return heap[0];
}