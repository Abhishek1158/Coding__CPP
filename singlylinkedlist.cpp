#include<iostream>
using namespace std;

class Node{

    public:
    int data;   // value
    Node* next;  // address of next node
    
   // Constructor 
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int value=this->data;

        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }


};

int getlength(Node* head){
    int len=0;
    Node* temp=head;
    
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

// Insert at Start/Head 
void insertHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

// New Node ending node ke aage
void insertTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp; //tail = tail -> next;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertPos(Node* &head,Node* &tail,int pos,int d){
    if(pos==1){
        insertHead(head,d);
        return;
    }

    Node* temp=head;
    if(temp->next==NULL){
        insertTail(tail,d);
        return;
    }

    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;  // temp++
        cnt++;
    }

    Node* nodetoinsert=new Node(d);
    nodetoinsert -> next=temp->next;
    temp->next=nodetoinsert;

}

// IN deletion if want to delete curr node then :> temp->next(value of curr)=curr->next(value after deleted node)
void deleteNode(int pos,Node* &head){
    // deleting first node
    if(pos==1){
        Node* temp=head;
        head=head->next;

        temp->next=NULL;
        delete temp;
    }
    else{
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        // prev->next= NULL;   :> after that element no element will print

    }
}

Node* detectloop(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(slow!=NULL&&fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            cout<<"present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node* StartingloopNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection=detectloop(head);
    Node* slow=head;

    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

void removeLoop(Node* head){
    if(head==NULL){
        return ;
    }
    Node* startloop = StartingloopNode(head);
    Node* temp = startloop;

    while(temp->next!=startloop){
        temp = temp -> next;
    }
    temp -> next = NULL;
}

int main(){

    // Created new node
    Node* node1 = new Node(10);
    // cout<< node1 -> data <<endl;
    // cout<< node1 -> next <<endl;
    
    // Head & Tail point to new(single) node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertTail(tail,12);
    print(head);

    insertTail(tail,15);
    print(head);

    insertTail(tail,28);
    print(head);
    
    insertPos(head,tail,3,19);
    print(head);
    

    tail->next=head->next;
    cout<<"Head :"<<head->data<<endl;
    cout<<"Tail :"<<tail->data<<endl;
    
    cout<<"Part of loop is detected "<<endl;
    if(detectloop(head)!=NULL){
        cout<<" Cycle is present "<<endl;
    }
    else{
        cout<<"Cycle is not present";
    }
    

    cout<<"Loop Starts At : "<<StartingloopNode(head)->data<<endl;
    
    removeLoop(head);
    print(head);
    
    deleteNode(4,head);
    print(head);
    cout<<"Head :"<<head->data<<endl;
    cout<<"Tail :"<<tail->data<<endl;
    
    cout<<"Length "<<getlength(head)<<endl;
    return 0;
}