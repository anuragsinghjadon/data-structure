#include<iostream>
#include<string>
#include<stack>
using namespace std;

void  counting(string exp)
{
    stack<char> stk;
    int i = 0;
    for(int j=0; exp[j]!='\0' ; j++)
    {
        if(exp[j]=='<')
        {
            stk.push(exp[j]);

        }

        else if(exp[j] == '>')
        {
            cout<<"else if running ";

            if(stk.top()=='<')
            {
                stk.pop();
            i++;
            }
            else
            {
                continue;
            }

        }
        else
{
                    stk.pop();
        }

    }
    cout<< "value of i "<<i<<endl;
}

int main()
{
    string exp;
    int t;
    cout<<"enter t "<<endl;
    cin>>t;

    while(t--)
    {cout<<"enter exp ";
        cin>>exp;
        counting(exp);

    }
    return 0;
}
