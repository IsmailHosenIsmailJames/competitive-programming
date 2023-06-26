#include <bits/stdc++.h>
using namespace std ;
class Node{
public:
	int value;
	Node * next;
	Node(int val){
		value = val;
		next = nullptr;
	}
};

Node* createNode(int v, Node* next) {
	Node * new_node = new Node(v);
	if(new_node == nullptr) exit(1);
	new_node -> next = next;
	return new_node;
}

Node * prepend(Node* head, int v){
	return createNode(v, head);
}

void printData(Node * head){
	while(head != nullptr){
		cout << head -> value << endl;
		head = head -> next;
	}
}

int main(){
	Node * head;
	head = createNode(10, nullptr);
	head = prepend(head, 9);
	printData(head);
}