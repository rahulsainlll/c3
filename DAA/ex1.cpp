#include <iostream>
using namespace std;

#define MAX 30

template <class T>
class Stack {
    private:
        T* arr;
        int top;

    public:
        Stack();
        void push(T x);
        T pop();
        T peek();
};

template <class T>
Stack<T>::Stack() {
    top = -1;
    arr = new T[MAX];
}

template <class T>
void Stack<T>::push(T x) {
    if (top < MAX - 1) {
        arr[++top] = x;
    } else {
        cout << "overflow" << endl;
    }
}

template <class T>
T Stack<T>::pop() {
    if (top >= 0) {
        return arr[top--];
    } else {
        cout << "underflow" << endl;
        return T();  
    }
}

template <class T>
T Stack<T>::peek() {
    if (top >= 0) {
        return arr[top];
    } else {
        cout << "empty" << endl;
        return T();  
    }
}


int main() {
	cout<<"Rahul"<<endl;
	cout<<"22BCS16610"<<endl;
    Stack<int> intStack;
    Stack<char> charStack;

    int x = 1, y = 3;
    char a = 'X', b = 'Y';

    intStack.push(x);
    intStack.push(y);

    cout << intStack.peek() << endl;

    cout << intStack.pop() << endl;
    cout << intStack.pop() << endl;
    cout << intStack.pop() << endl; 

	 cout << intStack.peek() << endl;

    charStack.push(a);
    charStack.push(b);

    cout << charStack.peek() << endl;
    cout << charStack.pop() << endl;
    cout << charStack.pop() << endl;
    cout << charStack.pop() << endl;  

    return 0;
}
