#include<iostream>
using namespace std;
class Box
{
    private: int l,b,h;
    public:
        // constructor we have to declare
        Box():l(0),b(0),h(0){cout<<"default constructor loaded ";}
        Box(int length, int height , int breadth): l(length), b(breadth),h(height){cout<<"perameter  constructor loaded ";}
        public:
        int getHeight(){return h;}
        int getLength(){return l;}
        int getBreadth() {return b;}

        bool operator < (Box const &obj)
        {
            if(l<obj.l)
            {
                cout<<"l is greater "<<endl;
                return true;
            }

            else if(b<obj.b && l==obj.l)
            {
                cout<<"b is greater "<<endl;
                return true;
            }

            else
            {
                if (h<obj.h && l==obj.l && b==obj.b)
                cout<<"h is greater "<<endl;
                return true;
            }
        }
        ~Box()
        {

        }
      friend ostream & operator << (ostream &out, const Box &c);

};
ostream & operator << (ostream &out, const Box &c)
{
    out << c.l <<" "<<c.b<<" " <<c.h;
    return out;
}

int main()
{
Box A(10,10,20) ,B(10,10,30);
    if(A<B)
        cout<<B;
    else
        cout<<"something going wrong "<<endl;

    return 0;
}
