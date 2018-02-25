#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int data, Node *next = NULL){
        this->data = data;
        this->next = next;
    }
};

class List{
public:
    Node *head;

    List(){
        head = NULL;
    }

    void append(int data){
        Node *node = new Node(data, head);
        head = node;
    }

    bool isEmpty(){
        return head == NULL;
    }

    ~List(){
        Node *ptr;
        while (head){
            ptr = head;
            head = head->next;
            delete ptr;
        }
    }
};

class Queue{
public:
    Node *head;
    Node *tail;

    Queue(){
        head = tail = NULL;
    }

    void push(int data){
        Node *node = new Node(data);
        if (isEmpty()){
            head = tail = node;
        }else{
            tail->next = node;
            tail = tail->next;
        }
    }

    int pop(){
        if (isEmpty()){
            return -1;
        }else{
            Node *ptr = head;
            int data = ptr->data;
            head = head->next;
            if (isEmpty())
                tail = NULL;
            delete ptr;
            return data;
        }
    }

    bool isEmpty(){
        return head == NULL;
    }

    ~Queue(){
        while(pop()!=-1);
    }
};

int max_node(int *min_time, Node *head){
    Node *ptr = head;
    int min, max = 0;
    while(ptr){
        min = min_time[ptr->data];
        if (max < min) max = min;
        ptr = ptr->next;
    }
    return max;
}

void dec_in_deg(int *in_deg, Queue *queue, Node *head){
    Node *ptr = head;
    int idx;
    while(ptr){
        idx = ptr->data;
        in_deg[idx]--;
        if (in_deg[idx] == 0){
            queue->push(idx);
        }
        ptr = ptr->next;
    }
}

int main()
{
    int T;
    cin >> T;
    while(T-- > 0){
        int N, K, W;
        int *time, *in_deg, *min_time;
        List **chd_list, **paren_list;
        Queue *queue = new Queue();

        cin >> N >> K;
        time = new int[N+1];
        in_deg = new int[N+1];
        min_time = new int[N+1];
        chd_list = new List*[N+1];
        paren_list = new List*[N+1];
        for (int i = 1; i <= N; i++){
            cin >> time[i];
            in_deg[i] = min_time[i] = 0;
            chd_list[i] = new List();
            paren_list[i] = new List();
        }
        for (int i = 1; i <= K; i++){
            int from, to;
            cin >> from >> to;
            in_deg[to]++;
            chd_list[from]->append(to);
            paren_list[to]->append(from);
        }
        cin >> W;

        // Push nodes in degree 0
        for (int i = 1; i <= N; i++){
            if (in_deg[i] == 0){
                queue->push(i);
            }
        }

        while (!queue->isEmpty()){
            int cur = queue->pop();
            min_time[cur] = max_node(min_time, paren_list[cur]->head) + time[cur];
            dec_in_deg(in_deg, queue, chd_list[cur]->head);
            if (cur == W){
                cout << min_time[cur] << endl;
                break;
            }
        }

        for (int i = 1; i <= N; i++){
            delete chd_list[i];
            delete paren_list[i];
        }
        delete[] chd_list;
        delete[] paren_list;
        delete[] in_deg;
        delete[] min_time;
        delete[] time;
        delete queue;
    }
    return 0;
}
