//#ifndef HW2_PRIORITYQUEUE_H
//#define HW2_PRIORITYQUEUE_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>

#include "minHeap.h"

template <class T>
class PriorityQueue {
private:
	minHeap<T> heap;
	vector<T> pqueue;

public:
	PriorityQueue<T>() {}
	int size();
	bool empty();
	void insertToHeap(T e);
	void print();
	T min();
	void removeMin();

};

//#endif