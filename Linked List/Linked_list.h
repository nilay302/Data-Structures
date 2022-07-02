using namespace std;
//Forward Decleration
class List;
class Node{
    int data;
    Node * next;

    public:
    
    Node(int d):data(d),next(NULL){}
    friend class List;
};

class List{
    Node * head;
    Node * tail;

    public:
    List():head(NULL),tail(NULL){}

    void push_front(int data){
        if(head==NULL){
            Node * n = new Node(data);
            head = tail = n;
        }
        else{
            Node * n = new Node(data);
            n-> next =head;
            head = n;
        }
    }
    void push_back(int data){
        if(head==NULL){
            Node * n = new Node(data);
            head = tail = n;
        }
        else{
            Node * n = new Node(data);
            tail-> next =n;
            tail = n;
        }
    }

    void insert(int data,int pos){
        if(pos==0){
            push_front(data);
        }
        else{
            Node * n = new Node(data);
            Node * p = head;
            for(int i = 0;i<pos-1;i++){
                p = p->next;
            }
            n->next = p->next;
            p->next = n;
        }
    }

    void display(){
        Node * n = head;
        while(n!=NULL){
            cout<<n->data<<" ";
            n = n->next;
        }
        cout<<endl;
        
    }
};

