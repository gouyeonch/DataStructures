#include <iostream>
#include <cctype>
#include <cstdlib>

#define MAX_SIZE 10

using namespace std;

typedef char Element;

class Stack{
    private:
        int top = -1;
        Element stack_array[MAX_SIZE] = {0,};
    public:
        void push(Element);
        Element pop();
        void stack_show();
};

void Stack::push(Element e){
    if(this->top>=MAX_SIZE-1) cout<<"satck is already full!!"<<endl;
    else {
        stack_array[++this->top]=e;
        cout<<this->top<<endl;
    }
}

Element Stack::pop(){
    if(this->top<=-1){
        cout<<"satck is empty!!"<<endl;
        return 0;
    }
    else{
        Element e = stack_array[this->top--];
        return e;
    }
}

void Stack::stack_show(){
    if(this->top<=-1) cout<<"satck is empty!!"<<endl;
    else{
        for(int i=0;i<=this->top;i++)
            cout<<"\n"<<stack_array[i]<<endl;
    }
}


int main()
{
    char c,e;
    Stack s;

    while(1)
    {
        cout<<"\nCommand>";
        cin>>c;
        c = toupper(c);

        switch (c) 
		{
            case '+': 
                cin>>e;
                s.push(e);
                break;
            case '-': 
                e = s.pop(); 
                cout<<"\n "<< e <<endl;
                break;
            case 'S': 
                s.stack_show(); 
                break; 
            case 'Q': 
                cout<<"\n";
                exit(1);
            default: 
                break;
		}
    }

    return 0;
}