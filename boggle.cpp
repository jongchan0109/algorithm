#include<iostream>
#include<string>
using namespace std;

const int dx[8]={-1,-1,-1,1,1,1,0,0};
const int dy[8]={-1,0,1,-1,0,1,-1,1};
char board[6][6];
char result[6][6];

bool hasWord(int y,int x,const string& word);
bool inRange(int y,int x);
void show();
void start();

int main(void)
{
    string word;cin>>word;
    getchar();
    start();
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            cin>>board[i][j];
    }
    cout<<hasWord(2,2,word);
    show();

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            cout<<result[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}

bool hasWord(int y,int x, const string& word)
{

    if(!inRange(y,x)){
        return false;   
    }
    if(board[y][x]!=word[0]){
        return false;
    }
    if(word.size()==1){
        result[y][x]=board[y][x];
        return true;
    }
    for(int direction=0;direction<8;direction++)
    {
        int nexty = y+dy[direction], nextx = x+dx[direction];
        if(hasWord(nexty,nextx,word.substr(1))){
            result[y][x]=board[y][x];
            result[nexty][nextx]=board[nexty][nextx];
            return true;
        }
    }
    return false;
}
bool inRange(int y,int x)
{
    if(x<0||x>5)
        return false;
    if(y<0||y>5)
        return false;
    return true;
}
void show()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            cout<<board[i][j]<<" ";
        cout<<"\n";
    }
}

void start()
{
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            result[i][j]='!';
}