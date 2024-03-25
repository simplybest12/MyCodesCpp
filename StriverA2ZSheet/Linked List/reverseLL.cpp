#include <iostream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>
#include <climits>
#include <cmath>

using namespace std;
class Node
{
public:
    int data;
    Node *next;

public:
    // constructor
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *constructLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        // mover=mover->next;
        // or
        mover = temp;
    }
    return head;
}
Node *removeHead(Node *head)
{
    if (head->next == NULL)
        return NULL;
    Node *first = head;
    head = head->next;
    delete first;
    return head;
}

Node *deleteKthValue(Node *head, int pos)
{
    // int len = lengthOfLL(head);
    int cnt = 0;
    // if(pos > len) return NULL;
    if (head == NULL || pos < 0)
        return NULL;
    if (pos == 1)
    {
        Node *first = head;
        head = head->next;
        delete first;
        return head;
    }

    Node *temp = head;
    Node *prev = NULL;
    while (temp)
    {
        cnt++;
        if (cnt == pos)
        {
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}
Node *removeValue(Node *head, int val)
{
    if (head == NULL)
        return NULL;
    if (head->data == val)
    {
        Node *first = head;
        head = head->next;
        delete first;
        return head;
    }
    Node *temp = head;
    Node *prev = NULL;
    while (temp)
    {
        if (temp->data == val)
        {
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *removeLast(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *last = head;
    while (last->next->next != NULL)
    {
        last = last->next;
    }
    delete last->next;
    last->next = nullptr;
    return head;
}

int lengthOfLL(Node *head)
{
    int len = 0;
    while (head)
    {
        len++;
        head = head->next;
    }
    return len;
}

Node *insertTail(Node *head, int val)
{
    if (head == NULL)
    {
        return new Node(val);
    }
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    Node *last = new Node(val);
    temp->next = last;
    return head;
}

Node *insertK(Node *head, int ele, int k)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(ele);
        }
        else
        {
            return NULL;
        }
    }
    if (k == 1)
    {
        Node *newNode = new Node(ele);
        head = newNode;
        return head;
    }
    int cnt = 0;
    Node *temp = head;

    while (temp)
    {
        cnt++;
        if (cnt == k - 1)
        {
            Node *newNode = new Node(ele);

            newNode->next = temp->next;
            temp->next = newNode;
        }
        temp = temp->next;
    }
    return head;
}
Node* reverseLinkedList(Node *head)
{
    Node* p = NULL;
    Node* q = head;
    Node* r;
    while(q){
        r=q->next;
        q->next = p;
        p=q;
        q=r;
    }
    head=p;
    return head;
}
int main()
{
   
}
