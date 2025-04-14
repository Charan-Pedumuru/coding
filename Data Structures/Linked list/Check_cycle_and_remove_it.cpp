#include <iostream>

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int value) : val(value), next(nullptr) {}
};

class LinkedList
{
private:
    ListNode *head;

public:
    LinkedList() : head(nullptr) {}

    void addNode(int value)
    {
        if (!head)
        {
            head = new ListNode(value);
        }
        else
        {
            ListNode *temp = head;
            while (temp->next)
                temp = temp->next;
            temp->next = new ListNode(value);
        }
    }

    // Creates a cycle by connecting the last node to the node at the given position (0-based)
    void createCycle(int pos)
    {
        if (pos < 0)
            return;

        ListNode *tail = head;
        ListNode *cycleNode = nullptr;
        int index = 0;

        while (tail->next)
        {
            if (index == pos)
                cycleNode = tail;
            tail = tail->next;
            index++;
        }

        if (index == pos)
            cycleNode = tail;
        if (cycleNode)
            tail->next = cycleNode;
    }

    bool hasCycle()
    {
        return detectCycleNode() != nullptr;
    }

    // Detects cycle and returns the meeting point of slow and fast if cycle exists
    ListNode *detectCycleNode()
    {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
                return slow;
        }
        return nullptr;
    }

    // Removes the cycle if it exists
    void removeCycle()
    {
        ListNode *meet = detectCycleNode();
        if (!meet)
            return; // No cycle

        ListNode *start = head;

        // If the cycle starts at head
        if (meet == head)
        {
            while (meet->next != head)
                meet = meet->next;
            meet->next = nullptr;
            return;
        }

        // Find the start of the loop
        while (start->next != meet->next)
        {
            start = start->next;
            meet = meet->next;
        }

        // Break the cycle
        meet->next = nullptr;
    }

    void printList()
    {
        ListNode *temp = head;
        int limit = 100; // Safety limit to avoid infinite loop in case of a cycle

        while (temp && limit--)
        {
            std::cout << temp->val << " -> ";
            temp = temp->next;
        }
        std::cout << "NULL" << std::endl;
    }

    ~LinkedList()
    {
        removeCycle(); // Ensure safe destruction
        while (head)
        {
            ListNode *next = head->next;
            delete head;
            head = next;
        }
    }
};

// Example usage
int main()
{
    LinkedList list;

    list.addNode(1);
    list.addNode(2);
    list.addNode(3);
    list.addNode(4);
    list.addNode(5);

    list.createCycle(2); // Cycle starts at node with value 3

    if (list.hasCycle())
    {
        std::cout << "Cycle detected!" << std::endl;
        list.removeCycle();
    }
    else
    {
        std::cout << "No cycle." << std::endl;
    }

    std::cout << "List after removing cycle: ";
    list.printList();

    return 0;
}
