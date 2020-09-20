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

    Person<int>* person = new Person<int>();
    person->write(5, 5);
    cout << person->size() << endl;
    cout << "Hello world! 2" << endl;

    person->insertToHeap(0);


    string numberInput;
    getline(cin, numberInput);
    stringstream stream(numberInput);

    vector<int> ints;
    int temp;
    while (stream >> temp) {
        ints.push_back(temp);
    }
    int m = 0;
    
   // PriorityQueue<int>* pq = new PriorityQueue<int>(0);




    int i = 1;
   // for (int i : ints) {
      // pq.insertToHeap(i);
 //   }
    //pq.print();
    



}

