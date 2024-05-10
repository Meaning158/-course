template <typename T>
class ForwardList {
public:
    struct Node {
        T value;
        Node* next = nullptr;
        Node(T value) {this->value = value;}
    };
    ~ForwardList()
    {
        while (size) {PopFront();}
    }

    void PushFront(const T& value)
    {
        if (head == nullptr)
        {
            head = new Node(value);
        }
        else
        {
            Node* current = head;
            head = new Node(value);
            head->next = current;
        }
        ++size;
    }
    void InsertAfter(Node* node, const T& value)
    {
        if (node == nullptr)
            PushFront(value);
        else
        {
            Node* current = new Node(value);
            ++size;
            current->next = node->next;
            node->next = current;
        }
    }
    void RemoveAfter(Node* node)
    {
        if (node != nullptr)
        {
            if (node->next != nullptr)
            {
                Node* current = node->next;
                if (current->next != nullptr)
                {
                    node->next = current->next;
                    delete current;
                }
                else
                {
                    node->next = nullptr;
                    delete current;
                }
                --size;
            }
        }
        else {PopFront();}
    }
    void PopFront()
    {
        if (head != nullptr) {
            Node* current = head;
            head = head->next;
            delete current;
            --size;
        }
    }
    Node* GetHead(){return head;}
    const Node* GetHead() const{return head;}
    size_t getSize() {return size;}

private:
    Node* head = nullptr;
    size_t size = 0;
};
