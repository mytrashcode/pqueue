#include "PriorityQueue.h" 

using namespace std;

template <class T>
int PriorityQueue<T>::size() {
	return this->pqueue.size();
}

template <class T>
bool PriorityQueue<T>::empty() {
	return this->pqueue.empty();
}

template <class T>
void PriorityQueue<T>::insertToHeap(T e) {
	//this->heap.insert(e);
}
template <class T>
void PriorityQueue<T>::print() {
    class vector<T>::iterator pos = pqueue.begin();
    cout << "Priority Queue: ";
    while (pos != pqueue.end())
    {
        cout << *pos << " ";
        pos++;
    }
    cout << endl;
}

template <class T>
T PriorityQueue<T>::min() {
    T t;
    t = min_element(this->pqueue.begin(), this->pqueue.end());
    return t;

}

template <class T>
void PriorityQueue<T>::removeMin() {
	this->pqueue.erase(find(min()));
}

