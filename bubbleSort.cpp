#include<iostream>

using namespace std;

int main()
{
        int arr = {23, 34,12, 19, 45, 98, 45,98, 100,13, 76,8};
        for (int i = 1;i < 12; i++)
        {
                for(int j = 0; j < 17; j++)
                {
                        if (arr[j] > arr[j+1])
                        {
                                int temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
                        }
                        cout<<arr[j]<<" , ";
                }
                cout<<endl;
        }
}