#include <iostream>
#include <vector>
using namespace std;
// 5 4 3 2 1 -> 4 5 3 2 1 -> 
// 5 4 3 2 1 -> 
vector<int> bubble(vector<int> unsorted)
{
    for(int i = 0; i < unsorted.size(); i++)
    {
        for(int j = 0; j < unsorted.size()-1;j++ )
        {
            if(unsorted[j] > unsorted[j+1])
            {
                int temp = unsorted[j];
                unsorted[j] = unsorted[j+1];
                unsorted[j+1] = temp;
            }
        }
    }

    return unsorted;
}
vector<int> mergesort(vector<int> unsorted, )
{

}
vector<int> merge(vector<int> unsorted1, vector<int> unsorted2)
{

}
int main()
{
    vector<int> unsorted={5,4,3,2,1};
    unsorted = bubble(unsorted);
    for(int i: unsorted)
    {
        cout<<i;
    }
    return 0;
}