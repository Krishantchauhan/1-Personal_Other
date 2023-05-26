// C++ program to demonstrate the use of priority_queue
#include <iostream>
#include <queue>
using namespace std;

// driver code
int main()
{
    int arr[6] = {10, 2, 4, 8, 6, 9};

    // defining priority queue
    priority_queue<int> pq;

    // printing array
    cout << "Array: ";
    for (auto i : arr)
    {
        cout << i << ' ';
    }
    cout << endl;
    // pushing array sequentially one by one
    for (int i = 0; i < 6; i++)
    {
        pq.push(arr[i]);
    }

    // printing priority queue

    int k = 3; // third largest element;
    cout << "Priority Queue: ";

    while (k != 1)
    {
        k--;
        // cout << pq.top() << ' ';
        pq.pop();
    }

    cout << pq.top() << ' ';

    return 0;
}
