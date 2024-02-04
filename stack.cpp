// #include<iostream>
// #include<stack>
// using namespace std;
// #define max 5

// class StackImplementation{
//     public:
//     int stack[max];
//     int top = -1;

//     void push(int item){
//         if(top == max-1){
//             cout<<"Stack Overflow"<<endl;
//         }else{
//             stack[++top] = item;
//             cout << "Item Pushed is: " << item << endl;
//         }
//     }

//     void pop(){
//         if(top == -1){
//             cout<<"Stack Underflow"<<endl;
//         }else{
//             top--;
//         }
//     }
//     void peek(){
//         if(top == -1){
//             cout<<"Stack is empty"<<endl;
//         }else{
//             cout<<"Top of the stack is "<<stack[top]<<endl;
//         }
//     }
//     void display(){
//         if(top==-1){
//             cout<<"Stack is empty"<<endl;
//         }else{
//             cout<<"Stack Items are: "<<endl;
//             int i;
//             for(i=top; i>=0; i--){
//                 cout<<stack[i]<<endl;
//             }
//         }
//     }
// };

// int main(){
//     StackImplementation 
// }