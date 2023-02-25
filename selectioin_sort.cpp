#include<iostream>
using namespace std;

int arr[10]={1,3,5,7,9,2,4,6,8,10};
void show();
void selectionSort();

int main(void)
{
    show();
    selectionSort();
    show();
    return 0;
}

void show()
{
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}
void selectionSort()
{
    int tmp;
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                tmp = arr[i];
                arr[i]=arr[j];
                arr[j]= tmp;
            }
        }
    }
}