#include<iostream>
using namespace std;

int days(int select, int amount)
{


}
int main()
{
    int d1,v1,d2,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    int days = 0;
    if(d1==d2)
    {
        check_point = p/(d1*v1+d2*v2);
        if(check_point)
            days = check_point+1;
        else
            days = check_point;
    }
    int diff,product,medium,final_prod,another_days;
    if(d1<d2)
    {
        days = d1 - 1;
        diff = d2-d1;
        product = diff*v1;
        final_prod = v1+v2;
        another_days = p/final_prod;

    }
    return 0;
}
