#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void selectionSort(vector<T> &A)//ascending order
{
    for (int i = 0; i<A.size();i++)
    {
        int min = A[i];
        int min_pos = i;
        for (int j = i+1;j<A.size();j++)
        {
            if(min>A[j])
            {
                min = A[j];
                min_pos = j;
            }
        }
        A[min_pos] = A[i];
        A[i]=min;
    }
}

int main()
{
    vector<int> A={4,5,56,3,2};
    selectionSort(A);
    for(auto a: A)
        cout<<a<<";";
    cout<<endl;
}