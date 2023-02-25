#include<iostream>
#include<vector>
using namespace std;

void pick(int n,vector<int>& picked, int topick);
void printPicked(vector<int>& picked);

int main(void)
{
    vector<int> picked;
    pick(10,picked,3);
    return 0;
}
void pick(int n,vector<int>& picked,int topick)
{
    if(topick==0){printPicked(picked); return;}

    int smallest = picked.empty()? 0:picked.back()+1;

    for(int next= smallest;next<n;next++)
    {
        picked.push_back(next);
        pick(n,picked,topick-1);
        picked.pop_back();
    }
}

void printPicked(vector<int>& picked){
    for(int i=0;i<picked.size();i++)
        cout<<picked[i]<<" ";
    cout<<"\n";
}
