//stack implementation by array
#include<iostream>
using namespace std;
class Stack
{
  int s[100];
  int top;

  public:
     Stack()
     {
        top=-1;
     }
     ~Stack()
     {
        top=-1;
     }
    void push(int value)
     {
        if(isStackFull())
            cout<<"stack overflow"<<endl;
        else
        {
            top++;
            s[top]=value;
        }

     }
     int pop()
     {
        if(isStackEmpty())
        {
           cout<<"stack underflow"<<endl;
           return 0;
        }

        else
          return s[top--];   
     }

     int Size()
     {
        return ++top;
     }

     int Top()
     {
           return s[top];
     }
     int isStackEmpty()
     {
        if(top==-1)
        return 1;
        else
        return 0;
     }
     int isStackFull()
     {
        if(top==99)
        return 1;
        else
        return 0;
     }
     void display()
     {
        for(int i=0;i<=top;i++)
        {
            cout<<s[i]<<"  ";
        }
     }
};
int main()
{
    Stack s1;
    int choice;
    while(1)
    {
        cout<<"1. pop "<<endl;
        cout<<"2. push "<<endl;
        cout<<"3. top "<<endl;
        cout<<"4. size "<<endl;
        cout<<"5. display"<<endl;
        cout<<"6. exit "<<endl;

        cout<<"enter your choice "<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                int value;
                cout<<"enter a value"<<endl;
                cin>>value;
                s1.push(value);
                break;
            }
            case 2:
            {
                int value;
                value=s1.pop();
                cout<<"deleted element is :"<<value<<endl;
                break;
            }

            case 3:
            {
                int value;
                value=s1.Top();
                cout<<"top element is :"<<value<<endl;
                break;
            }

            case 4:
            {
                int a;
                a=s1.Size();
               cout<<"size of stack is "<<a<<endl;
               break;
            }
            case 5:
            {
                s1.display();
            }

            case 6:
            {
                exit(0);
            }
        }
    }
 return 0;
}