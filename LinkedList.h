#include <cstddef>
using namespace std;

class Node {
    private :
        Node* next;
        int data;
    public:
        Node( int d) {
            data = d;
            next = NULL;
        };
        void setData(int d) {
            data = d;
        };
        int getData() {
            return data;
        };
        void setNext(Node* aNext) { next = aNext; };
        Node* getNext() {
            return next;
        };
};

class LinkedList {
    private :
        Node *head;
    public :
        LinkedList() {
            head = NULL;
        };
        void print() {
            Node *tmp = head;
            cout << tmp->getData();
        };
        void add(int d) {
            Node* n = new Node(d);
            Node *t = head;
            if (t != NULL) {
                while (t->getNext() != NULL) {
                    t = t->getNext();
                }
                t->setNext(n);
            } else {
                head = n;
            };
        };
};