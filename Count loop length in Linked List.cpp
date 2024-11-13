// Node is defined as
// struct Node{
//   int data=0;
//   Node* next;
//   Node(){
//         this->data = 0;
//         this->next = nullptr;
//   }
//   Node(int data){
//       this->data = data;
//       this->next = nullptr;
//   }
// };
int solve(Node* head){
   // Complete the function
   Node* slow=head;
   Node* fast=head;
   while(fast!=NULL && fast->next!=NULL){
       slow=slow->next;
       fast=fast->next->next;
       if(slow==fast){
           int cnt=1;
           fast=fast->next;
           while(slow!=fast){
               cnt++;
               fast=fast->next;
           }
           return cnt;
       }
   }
   return -1;
}
