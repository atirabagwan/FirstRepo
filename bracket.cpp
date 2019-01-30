#include<iostream>
#include"stack.h"
using namespace std;
int bracket(char exp[20])
{
	stack<char> s;
	int i;
	char x;
	for(i=0;exp[i]!='\0';i++)
	{
		if(exp[i]=='('||exp[i]=='['||exp[i]=='{')
		{
			s.push(exp[i]);
		}
		else if(exp[i]==')'||exp[i]==']'||exp[i]=='}')
		{
			if(s.isempty())
			return 0;
			else
			{
				switch(exp[i])
				{
					case ')':x=s.pop();
						if(x!='(')
						return 0;
						break;
					case ']':x=s.pop();
						if(x!='[')
						return 0;
						break;
					case '}':x=s.pop();
						if(x!='{')
						return 0;
						break;
						
				}
			}
		}
	}
	if(s.isempty())
	return 1;
}
int main()
{
	char exp[20];
	cout<<"\nEnter a parenthesized expression:\t";
	cin>>exp;
	if(bracket(exp))
	cout<<"\nBalanced Parenthesis.\n";
	else
	cout<<"\nNot Balanced.\n";
}
