#include <iostream>
//#include <"priorityQueue.h">
#include <C:\Users\Emmanuel Jokotoye\Documents\Coding Files C++\lab09\priorityQueue.h>

using namespace std;

int main()
{
    priorityQueue firstQueue;

    firstQueue.Insert(4);
    firstQueue.Insert(5);
    firstQueue.Insert(6);
    firstQueue.Insert(2);
    firstQueue.Insert(1);

    firstQueue.PrintQueue();

    return 0;
}
