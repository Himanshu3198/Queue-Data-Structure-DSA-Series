#include <bits/stdc++.h>
using namespace std;

class LRU{

    list<int> dq;

    unordered_map<int,list<int>::iterator> ma;
    int Cachesize;

public:
     LRU(int);
    void refer(int);
    void display();
};

// declare size of cache;

LRU::LRU(int n)
{
    Cachesize = n;
}

void LRU::refer(int x)
{

    //  not present in map
    if (ma.find(x) == ma.end())
    {

        if (dq.size() == Cachesize)
        {

            int last = dq.back();
            dq.pop_back();
            ma.erase(last);
        }
    }

    else
    {
        dq.erase(ma[x]); //  else present in cache
    }

    dq.push_front(x);
    ma[x]=dq.begin();
}



void LRU::display(){

    for(auto it=dq.begin();it!=dq.end();it++){
        cout<<(*it)<<"\n";
    }
    cout<<"\n";
}

int main(){

    LRU ca(4);
    ca.refer(1); 
	ca.refer(2); 
	ca.refer(3); 
	ca.refer(1); 
	ca.refer(4); 
	ca.refer(5); 
	ca.display(); 

    return 0;

}