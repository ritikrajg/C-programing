#include <iostream>

    using namespace std;
    
    struct Node {
      string value;
      Node* next;
    };
    
    class Queue {
     private:
      Node* head;
      Node* tail;
    
     public:
      Queue() {
        head = nullptr;
        tail = nullptr;
      }
    
      void enqueue(string value) {
        Node* new_node = new Node;
        new_node->value = value;
        new_node->next = nullptr;
    
        if (head == nullptr) {
          head = new_node;
          tail = new_node;
        } else {
          tail->next = new_node;
          tail = new_node;
        }
      }
    
      string dequeue() {
        if (head == nullptr) {
          return "";
        } else {
          string value = head->value;
          Node* temp = head;
          head = head->next;
          delete temp;
    
          if (head == nullptr) {
            tail = nullptr;
          }
    
          return value;
        }
      }
    
      string peek() {
        if (head == nullptr) {
          return "";
        } else {
          return head->value;
        }
      }
    };
    
    int main() {
      Queue queue;
    
      // Add patrons to the queue
      queue.enqueue("Patron 1");
      queue.enqueue("Patron 2");
      queue.enqueue("Patron 3");
    
      // Check the next patron in line
      string next_patron = queue.peek();
      cout << "The next patron in line is: " << next_patron << endl;
    
      // Process patrons as they borrow books
      string patron_1 = queue.dequeue();
      cout << "Processing patron: " << patron_1 << endl;
    
      string patron_2 = queue.dequeue();
      cout << "Processing patron: " << patron_2 << endl;
    
      // Check the next patron in line
      next_patron = queue.peek();
      cout << "The next patron in line is: " << next_patron << endl;
    
      return 0;
    }