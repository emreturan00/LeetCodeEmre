#include <iostream>
#include <vector>

using namespace std;

class MyStack {
public:

    int peak; 
    int capacity;
    int* data;
    

    MyStack() {
        peak = -1;
		capacity = 100;
		data = new int[capacity];
    }

    
    void push(int x) {
			peak++;
			data[peak] = x;
    }
    
    int pop() {
        if (peak != -1)
		{
            int temp = data[peak]; 
            peak--;
			return temp;
		}
        return 0;
    }
    
    int top() {
        if (peak != -1)
		{
			return data[peak];
		}
        return 0;
    }
    
    bool empty() {
        if (peak != -1)
		{
			return false;
		}
		return true;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */