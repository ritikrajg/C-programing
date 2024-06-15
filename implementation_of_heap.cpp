#include <iostream>
#include <algorithm>
using namespace std;
class heap
{
public:
    int arr[100];
    int size = 0;
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[size] = val;
        while (index > 1)
        {
            int par = index / 2;
            if (arr[par] < arr[index])
            {
                arr[par] += arr[index];
                arr[index] = arr[par] - arr[index];
                arr[par] -= arr[index];
            }
            else
            {
                return;
            }
            index /= 2;
        }
    }
    void deleteheap()
    {
        if (size == 0)
        {
            cout << "Heap is empty." << endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int index = 1;
        while (index < size)
        {
            int leftindex = index * 2;
            int rightindex = index * 2 + 1;
            if (leftindex < size && arr[index] < arr[leftindex])
            {
                swap(arr[index], arr[leftindex]);
                index = leftindex;
            }
            else if (rightindex < size && arr[index] < arr[rightindex])
            {
                swap(arr[index], arr[rightindex]);
                index = rightindex;
            }
            else
            {
                break;
            }
        }
    }
    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
void heapify(int arr[], int i, int s)
{
    int large=i;
    while (i < s)
    {
        int left = large * 2;
        int right = large * 2 + 1;
        if (left < s && arr[large] < arr[left])
        {
            large = left;
        }
        if (right < s && arr[large] < arr[right])
        {
            large = right;
        }
        if(large!=i){
            swap(arr[i],arr[large]);
            i=large;
        }
        else{
            break;
        }
    }
}
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deleteheap();
    h.print();
    int arr[] = {-1,54,53,55,52,50};
    int n=5;
    for (int i = n/2; i > 0; i--)
    {
        heapify(arr, i, n);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}