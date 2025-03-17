#include <iostream>
#define SIZE 5

class CircularDeque
{
    int arr[SIZE], front, rear, count;

public:
    CircularDeque() : front(-1), rear(-1), count(0) {}

    bool isFull() { return count == SIZE; }
    bool isEmpty() { return count == 0; }

    void insertFront(int val)
    {
        if (isFull())
        {
            std::cout << "Deque is Full\n";
            return;
        }
        front = (front == -1) ? 0 : (front - 1 + SIZE) % SIZE;
        arr[front] = val;
        count++;
    }

    void insertRear(int val)
    {
        if (isFull())
        {
            std::cout << "Deque is Full\n";
            return;
        }
        rear = (rear + 1) % SIZE;
        arr[rear] = val;
        count++;
    }

    void deleteFront()
    {
        if (isEmpty())
        {
            std::cout << "Deque is Empty\n";
            return;
        }
        front = (front + 1) % SIZE;
        count--;
    }

    void deleteRear()
    {
        if (isEmpty())
        {
            std::cout << "Deque is Empty\n";
            return;
        }
        rear = (rear - 1 + SIZE) % SIZE;
        count--;
    }

    void display()
    {
        if (isEmpty())
        {
            std::cout << "Deque is Empty\n";
            return;
        }
        std::cout << "Deque: ";
        for (int i = 0, idx = front; i < count; i++, idx = (idx + 1) % SIZE)
            std::cout << arr[idx] << " ";
        std::cout << "\n";
    }
};

int main()
{
    CircularDeque dq;
    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.display();
    dq.deleteFront();
    dq.display();
}
