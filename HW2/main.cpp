// HW2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#include "PriorityQueue.h"
#include "Source.cpp"

using namespace std;

int main()
{
 
    cout << "Hello world!" << endl;

    string numberInput;
    getline(cin, numberInput);
    stringstream stream(numberInput);

    vector<int> ints;
    int temp;
    while (stream >> temp) {
        ints.push_back(temp);
    }
    
    PriorityQueue<int> * pq = new PriorityQueue<int>(0);

   // for (int i : ints) {
       pq.insertToHeap(1);
 //   }
    //pq.print();
    



}

