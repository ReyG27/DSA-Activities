#include <iostream>

using namespace std;

typedef struct Node{
    string songName;
    Node  *link;
}Node;

Node *createNode(string data){
    Node *newNode = new Node;
    newNode->songName = data;
    newNode->link = NULL;

    return newNode;
}

void traverse(Node *head){
    Node *temp = new Node;
    temp = head;
    
    cout << "My Playlist" <<endl;
    while(temp != NULL){
        cout << temp->songName<< "->"<<endl;
        if(temp->link == NULL){
            cout << "NULL"<<endl;
        }
        
        temp = temp->link;
    }
}

Node *insertAtEnd(string data, Node *head){
    if(head == NULL){
        Node *newNode = createNode(data);
        head = newNode;
        cout << "A new node has been inserted at the end \n" << endl;
        return head;
    }
    Node *temp = new Node;
    temp = head;
    
    while(temp->link != NULL){
        temp = temp->link;
    }
    
    Node *newNode = createNode(data);
    temp->link = newNode;
    
    cout << "A new node has been inserted at the end \n" << endl;
    return head;
}

Node *insertAtBeginning(string data, Node *head){
    Node *newNode = createNode(data);
    newNode->link = head;
    
    head = newNode;
    
    cout << "A new node has been inserted at the beginning \n" <<endl;
    
    return head;
}

string insertAfter(string after, string data, Node *head){
    Node *temp = new Node;
    temp = head;
    
    while(temp->songName.compare(after) != 0){
        if(temp == NULL){
            return "No such exist, please try again later.";
        }
        
        temp = temp->link;
    }
    Node *newNode = createNode(data);
    newNode->link = temp->link;
    temp->link = newNode;
    
    return "An new node has been inserted after " + after + "\n";
}

string deleteAtEnd(Node *head){
    if(head == NULL){
     return "The linked list is empty \n";
    }
    
    if(head->link == NULL){
        delete head;
        return "The head has been deleted \n";
    }
    
    Node *temp = new Node;
    temp = head;
    
    while(temp->link->link != NULL){
        temp= temp->link;
    }
    
    temp->link = NULL;
    
    return "A node has been deleted at the end \n";
}

Node *deleteFromBeginning(Node *head){
    if(head == NULL){
        cout << "The linked list is empty \n" << endl;
        return NULL;
    }
    
    if(head->link == NULL){
        delete head;
    }
    
    head = head->link;
    
    return head;
}

Node *deleteFromGivenNode(string givenNode, Node *head){
    if(head == NULL){
        cout << "The linked list is empty. \n" << endl;
        return NULL;
    }
    
    if(head->songName.compare(givenNode) == 0){
        head = deleteFromBeginning(head);
        cout << "The Node " + givenNode + " has been deleted. \n" << endl;
        return head;
    }
    
    Node *temp = new Node;
    Node *next = new Node;
    temp = head;
    next = temp->link;
    
    while(next->songName.compare(givenNode) != 0){
        if(temp == NULL){
            cout << "No such node exist. \n" <<endl;
            return head;
        }
        next = next->link;
        temp = temp->link;
    }
    
    temp->link = next->link;
    cout << "THe Node " + givenNode + " has been deleted. \n" << endl;
    return head;
}

int main(){
    Node *head = createNode("Sanctuary by Joji");
    
    head = insertAtEnd("Sunday Morning by Maroon 5", head);
    head = insertAtEnd("Secret Door by Arctic Monkeys", head);
    head = insertAtEnd("Feel Good inc. by Gorillaz", head);
    head = insertAtEnd("Duvet by Boa", head);
    traverse(head);
    
    head = insertAtBeginning("Let Me Go by Daniel Caesar", head);
    head = insertAtBeginning("Always by Rex Orange County", head);
    head = insertAtBeginning("Loose by Daniel Caesar", head);
    head = insertAtBeginning("Save Your Tears by The Weekend", head);
    traverse(head);
    
    insertAfter ("Pasilyo by Sunkissed Lola", "Let Me Go by Daniel Caesar", head);
    insertAfter ("Ikaw Lang by Nobita", "Always by Rex Orange County", head);
    insertAfter ("Di Na Muli by The Itchyworms", "Save Your Tears by The Weekend", head);
    traverse(head);
    
    

    return 0;
}#include <iostream>

using namespace std;

typedef struct Node{
    string songName;
    Node  *link;
}Node;

Node *createNode(string data){
    Node *newNode = new Node;
    newNode->songName = data;
    newNode->link = NULL;

    return newNode;
}

void traverse(Node *head){
    Node *temp = new Node;
    temp = head;
    
    cout << "My Playlist" <<endl;
    while(temp != NULL){
        cout << temp->songName<< "->"<<endl;
        if(temp->link == NULL){
            cout << "NULL"<<endl;
        }
        
        temp = temp->link;
    }
}

Node *insertAtEnd(string data, Node *head){
    if(head == NULL){
        Node *newNode = createNode(data);
        head = newNode;
        cout << "A new node has been inserted at the end \n" << endl;
        return head;
    }
    Node *temp = new Node;
    temp = head;
    
    while(temp->link != NULL){
        temp = temp->link;
    }
    
    Node *newNode = createNode(data);
    temp->link = newNode;
    
    cout << "A new node has been inserted at the end \n" << endl;
    return head;
}

Node *insertAtBeginning(string data, Node *head){
    Node *newNode = createNode(data);
    newNode->link = head;
    
    head = newNode;
    
    cout << "A new node has been inserted at the beginning \n" <<endl;
    
    return head;
}

string insertAfter(string after, string data, Node *head){
    Node *temp = new Node;
    temp = head;
    
    while(temp->songName.compare(after) != 0){
        if(temp == NULL){
            return "No such exist, please try again later.";
        }
        
        temp = temp->link;
    }
    Node *newNode = createNode(data);
    newNode->link = temp->link;
    temp->link = newNode;
    
    return "An new node has been inserted after " + after + "\n";
}

string deleteAtEnd(Node *head){
    if(head == NULL){
     return "The linked list is empty \n";
    }
    
    if(head->link == NULL){
        delete head;
        return "The head has been deleted \n";
    }
    
    Node *temp = new Node;
    temp = head;
    
    while(temp->link->link != NULL){
        temp= temp->link;
    }
    
    temp->link = NULL;
    
    return "A node has been deleted at the end \n";
}

Node *deleteFromBeginning(Node *head){
    if(head == NULL){
        cout << "The linked list is empty \n" << endl;
        return NULL;
    }
    
    if(head->link == NULL){
        delete head;
    }
    
    head = head->link;
    
    return head;
}

Node *deleteFromGivenNode(string givenNode, Node *head){
    if(head == NULL){
        cout << "The linked list is empty. \n" << endl;
        return NULL;
    }
    
    if(head->songName.compare(givenNode) == 0){
        head = deleteFromBeginning(head);
        cout << "The Node " + givenNode + " has been deleted. \n" << endl;
        return head;
    }
    
    Node *temp = new Node;
    Node *next = new Node;
    temp = head;
    next = temp->link;
    
    while(next->songName.compare(givenNode) != 0){
        if(temp == NULL){
            cout << "No such node exist. \n" <<endl;
            return head;
        }
        next = next->link;
        temp = temp->link;
    }
    
    temp->link = next->link;
    cout << "THe Node " + givenNode + " has been deleted. \n" << endl;
    return head;
}

int main(){
    Node *head = createNode("Sanctuary by Joji");
    
    head = insertAtEnd("Sunday Morning by Maroon 5", head);
    head = insertAtEnd("Secret Door by Arctic Monkeys", head);
    head = insertAtEnd("Feel Good inc. by Gorillaz", head);
    head = insertAtEnd("Duvet by Boa", head);
    traverse(head);
    
    head = insertAtBeginning("Let Me Go by Daniel Caesar", head);
    head = insertAtBeginning("Always by Rex Orange County", head);
    head = insertAtBeginning("Loose by Daniel Caesar", head);
    head = insertAtBeginning("Save Your Tears by The Weekend", head);
    traverse(head);
    
    insertAfter ("Kahit Di Mo Alam by December Avenue", "Let Me Go by Daniel Caesar", head);
    insertAfter ("Kundiman by Silent Sanctuary", "Always by Rex Orange County", head);
    insertAfter ("Byahe by Kyle Raphael", "Save Your Tears by The Weekend", head);
    traverse(head);
    
    

    return 0;
}