
 #include<iostream>
 #include<string.h>
#include "stack.h"
 #define MAX 50
 using namespace std;

int icp(char ch)   //incoming priority
{
 	switch(ch)
 	{
 		case '+':
 		case '-':return 1;
 			 break;
 		case '*':
 		case '/':return 2;
 			break;
 		case '^':return 3;
 			break;
 		case '(':return 4;
 			break;
 	}
}
  int isp(char ch)      //in stack priority
{
 	switch(ch)
 	{
 		case '+':
 		case '-':return 1;
 			 break;
 		case '*':
 		case '/':return 2;
 			break;
 		case '^':return 3;
 			break;
 		case '(':return 0;
 			break;
 	}
 }
 void intopost()
 {
 	stack<char> s;
 	char infix[20],ch,x,post[20];
 	int i=0,j=0;
 	cout<<"\nenter a infix expression:\t";
 	cin>>infix;
 	while(infix[i]!='\0')
 	{
 		ch=infix[i];
 		if(ch>='a'&&ch<='z' || ch>='A'&&ch<='Z')
 		{
 			post[j]=ch;
 			j++;
 		}
 		else if(ch==')')
 		{
 			while(s.gettop()!='(')
 			{
 				post[j]=s.pop();
 				j++;
 			}
 			s.pop();
 		}
 		else
 		{
 				while(isp(s.gettop())>=icp(ch))
 				{
 					x=s.pop();
 					post[j]=x;
 					j++;
 				}
 			s.push(ch);
 		}
 		i++;
 	}//end of while
 while(!s.isempty())
 {
 	x=s.pop();
 	post[j]=x;
 	j++;
 }
 	post[j]='\0';
 	cout<<"\npostfix expression:\t"<<post;
 }
 int main()
 {
 	intopost();
 	cout<<"\n";
 }










