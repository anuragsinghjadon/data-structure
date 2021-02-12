#include<bits/stdc++.h>

using namespace std;

bool search(int value , vector<int> & fr)
{
    for(int i=0;i<fr.size();i++)
        if(fr[i]==value)
            return true;

    return false;

}

int prediction(int pg[], vector<int>& fr, int index, int pn)
{
    int res = -1 ;
    int farthest = index;
        for(int i=0;i<fr.size();i++)
        {
            int j;
            for(j=index ; j<pn ; j++)
            {
                if (fr[i] == pg[j])
                {
                    if (j > farthest)
                    {
                        farthest = j;
                        res = i;
                    }
                    break;
            }
        }
          if (j == pn)
            return i;
}
          return (res == -1) ? 0 : res;
}

void optimisation(int pg[], int pn, int fn)
{
        vector<int> fr;

        for (int i = 0; i < pn; i++)
        {
            int hit =0;

           if(search(pg[i], fr))
           {
                hit++;
                continue;
           }

            if(fr.size()<fn)
                fr.push_back(pg[i]);

            else
            {
                int j = prediction(pg , fr, i+1,fn);
                fr[j] = pg[i];
            }


        }

}


int main()
{
    int n, fn;
    cout<<"enter pn and fn ";
    cin>>n>>fn;
    int pg[n];
    cout<<"enter pg value ";
    for(int i=0;i<n;i++)
    cin>>pg[i];

    optimisation(pg,n,fn);
    return 0;
}55
