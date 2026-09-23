#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node* head,int x,int y) {
    Node* tmp = head;
    long long sum = 0;
    int idx = 0;
    while (tmp != NULL) {
        if (idx >= x && idx <= y)
        {
            sum += tmp->val;   