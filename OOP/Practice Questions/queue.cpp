#include <iostream>
using namespace std;

class QUEUE
{
    private:
    int queueArray[10];
    int tail, head; // Variables acting like a pointer, logically

    public:
    void init(void);
    void queue_put(int input);
    int queue_get(void);
};

void QUEUE::init(void)
{
    head = tail = 0;
}

void QUEUE::queue_put(int input)
{
    if(tail==10)
    {
        cout << "queue is full";
        return;
    }
    tail++;
    queueArray[tail] = input;
}

int QUEUE::queue_get(void)
{
    // Ensures FIFO (First In First Out) Behaviour
    if(head == tail)
    {
        cout << "Queue underflow.";
        return 0;
    }
    head++;
    return queueArray[head];
}


int main()
{
    QUEUE queue_one, queue_two;
    int value;

    queue_one.init();
    queue_two.init();

    // Input 2 values for queue_one
    cout << "Enter 2 numbers for Queue #1:\n";
    for(int i = 0; i < 2; i++)
    {
        cin >> value;
        queue_one.queue_put(value);
    }

    // Input 2 values for queue_two
    cout << "Enter 2 numbers for Queue #2:\n";
    for(int i = 0; i < 2; i++)
    {
        cin >> value;
        queue_two.queue_put(value);
    }

    cout << "___________________________\n\n";
    // Display queue_one
    cout << "Queue #1:\n";
    cout << queue_one.queue_get() << " ";
    cout << queue_one.queue_get() << endl;

    // Display queue_two
    cout << "Queue #2:\n";
    cout << queue_two.queue_get() << " ";
    cout << queue_two.queue_get() << "\n";

    return 0;
}
