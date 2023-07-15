#ifndef node_h
#define node_h

template <typename Object>
class Node{
    private:
        Object data;
        Node *next;
    public:
        Node(Object = Object());
        Object get_data();
        Node* get_next();
        void set_data(Object);
        void set_next(Node*);
        
};

#endif