#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>

#include "minHeap.h"

using namespace std;

template <class T>
class Person {
private:

    minHeap<int>* heap;
    vector<int> pqueue;

public:
	Person<T>(){
        this->heap = new minHeap<int>();
      //  this->pqueue = new vector<int>();
        this->pqueue.push_back(1);
        this->pqueue.push_back(2);
        this->pqueue.push_back(3);
    }

	void write(T i, T b) {
		cout << i + b;
	}

   // template <class T>
    int size() {
        return this->pqueue.size();
    }

   // template <class T>
    bool empty() {
        return this->pqueue.empty();
    }
    
    template <class T>
    void insertToHeap(T e) {
      //  this->*heap->insert(e);
    }
    
    template <class T>
    void print() {
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
    T min() {
        T t;
        t = min_element(this->pqueue.begin(), this->pqueue.end());
        return t;

    }

    template <class T>
    void removeMin() {
        this->pqueue.erase(find(min()));
    }


};