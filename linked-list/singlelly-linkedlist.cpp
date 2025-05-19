#include <iostream>
using namespace std;

 struct Node
 {
    int data;
    Node*next;
    Node*prev;
 };

 Node*head=NULL;
 void InserForward(int value){

    Node*newNode = new Node();
    newNode->data=value;
    newNode->next=NULL;
    if(head == NULL){
        head =newNode;
    }else{

        Node*temp=head;
        while ( temp->next != NULL)
        {
           temp=temp->next;
        }
        temp->next=newNode;
        
    };

 };
 
  void InserBackward(int value){

    Node*newNode = new Node();
    newNode->data=value;
    newNode->prev=NULL;
    if(head == NULL){
        head =newNode;
    }else{

        Node*temp=head;
        while ( temp->prev != NULL)
        {
           temp=temp->prev;
        }
        temp->prev=newNode;
        
    };

 };
 void DisplayForward(){

    Node*temp = head;
    cout << "Forward: ";
    while (temp != NULL)
    {
       cout <<temp->data<<"->";
       temp=temp->next;
    }
    cout<<"NULL"<<endl;    
 };

  void DisplayBackward(){

    Node*temp = head;
    cout<<"BackWard: ";
    while (temp != NULL)
    {
       cout <<temp->data<<"<-";
       temp=temp->prev;
    }
    cout<<"NULL"<<endl;
    
 }

 int Display(){
    if(InserForward){
        DisplayForward();
    }
    else if(InserBackward){
        DisplayBackward();
    }

 };

 int main(){
    InserForward(10);
    Display();
    InserBackward(20);
    Display();

    return 0;
 }
 