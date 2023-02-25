#include<iostream>
using namespace std;

int arr[10]={1,3,5,7,9,2,4,6,8,10};
void show();
void bubbleSort();

int main(void)
{
    show();
    bubbleSort();
    show();
    return 0;
}

void show()
{
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}
void bubbleSort()
{
    int tmp;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(arr[j]>arr[j+1])
            {
                tmp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
}