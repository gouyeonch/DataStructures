#include <iostream>
#include <stack>

using namespace std;

typedef char Element;

int main()
{
    char c,e;
    stack<Element> s;

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
                e = s.top();
                s.pop();
                cout<<"\n "<< e <<endl;
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