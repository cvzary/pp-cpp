/*
Napisz program w języku C++, który będzie symulował jednokierunkową listę wskaźnikową wartości dowolnego typu.
*/

#include <iostream>
struct Node {
    void *data;
    Node *next;
};
void push_front(Node **head_ref, void *new_data, size_t data_size) {
    Node *new_node = new Node;
    new_node->data = new char[data_size];
    for(size_t i = 0; i < data_size; ++i)
        *((char *)new_node->data + i) = *((char *)new_data + i);
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void print_list(Node *node, void (*fptr)(void *)) {
    while(node != nullptr) {
        fptr(node->data);
        node = node->next;
    }std::cout << "\n";
}
void print_int(void *data) {
    std::cout << *(int *)data << " ";
}
void print_float(void *data) {
    std::cout << *(float *)data << " ";
}
int main() {
    Node *start = nullptr;
    unsigned int int_size = sizeof(int);
    int arr1[] = {10, 20, 30, 40, 50}, i;
    for(i = 4; i >= 0; --i)
        push_front(&start, &arr1[i], int_size);
    print_list(start, print_int);
    start = nullptr;
    unsigned int float_size = sizeof(float);
    float arr2[] = {10.1f, 20.2f, 30.3f, 40.4f, 50.5f};
    for(i = 4; i >= 0; --i)
        push_front(&start, &arr2[i], float_size);
    print_list(start, print_float);
    return 0;
}