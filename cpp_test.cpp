#include <iostream>
#include <stdio.h>
#include <any>
#include <string>

template <typename T>
class Node
{
private:
    T data;
public:
    Node *next;

public:
    Node(const T &data) : data(data), next(nullptr){};

    void getNodeData() { std::cout << data << std::endl; }
    
};

template<std::string>
void printNodes(Node<std::string> &head){
    if (head.data == NULL)
        std::cout << "There is nothing there my dude\r\n";
    Node <std::string> cur = head; 
    while (cur.next != NULL){
        std::cout << cur << ", ";
        cur = cur.next;
    }
}

int main()
{
    std::cout << "hello world\r\n";

    Node<std::string> node_1("did it work");
    //node_1.getNodeData();

    Node<std::string> node_2("yes it did");

    node_1.next = &node_2;

    printNodes(node_1);
    return 0;
}