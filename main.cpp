#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void stackF() {
	stack<int> myStack;
	
	myStack.push(5);
	myStack.push(3);
	myStack.push(2);
	
	cout << "Number of ints on the stack " << myStack.size() << endl;
	
	while(!myStack.empty()) {
		cout << "popping " << myStack.top() << endl;
		myStack.pop();
	}
	cout << "Number of ints on the stack " << myStack.size() << endl;
}

void queueF() {
	queue<int> myQ;
	
	for(int i = 0; i < 10; i++) {
		cout << "enqueuing " << i << endl;
		myQ.push(i);
	}
	
	cout << "size of myQ: " << myQ.size() << endl;
	
	cout << "The back of myQ: " << myQ.back() << endl;
	
	while(!myQ.empty()) {
		cout << "dequeuing " << myQ.front() << endl;
		myQ.pop();
	}
}

int main(int argc, char** argv) {
	cout << "This is the stack program" << endl;
	stackF();
	
	cout << "\nThis is the queue program" << endl;
	queueF();
	
	return 0;
}
