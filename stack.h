/* STACKS USIING ARRAY*/
 #include<iostream>
 #include<stdlib.h>
 #define MAX 50
 using namespace std;
 template <class T>
 class stack
 {
 	T stk[MAX];
 	int top;
    public:
    	stack()
   	 { top=-1; }
   	 void display();
   	 void push(T);
   	 T pop();
   	 int isempty();
   	 int isfull();
   	 T gettop();
 };
 template <class T>
 void stack<T>::display()
 {
 	int i;
 	for(i=0;i<=top;i++)
 	{
 		cout<<"\n"<<stk[i];
 	}
 }
  template <class T>
 void stack<T>::push(T element)
 {
 	if(!isfull())
 	{
 		top++;
 		stk[top]=element;		
 	}
 }//end of push
template <class T>
T stack<T>::pop()
 {
 	if(!isempty())
 	{
 		T p=stk[top];
 		top--;
 		return p;
 		
 	}
 }//end of pop
 
  template <class T>
 int stack<T>::isempty()
 {
 	if(top==-1)
 		return 1;
 	else
 		return 0;
 }//end of isempty
  template <class T>
 int stack<T>::isfull()
 {
 	if(top==MAX-1)
 		return 1;
 	else
 		return 0;
 }//end of isfull
 template<class T>
 T stack<T>::gettop()
 {
 	if(!isempty())
 	return stk[top];
 }

 
 
