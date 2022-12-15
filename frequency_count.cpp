#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    int visitedArr[n]={0};
    int visited = -1;
    //int count;

    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        int count=1;
        for (int j = i+1; j < n; j++)
        {
            /* code */
            if (arr[i]==arr[j])
            {
                /* code */
                count++;
                visitedArr[j]=visited;
            }
            
        }
        if (visitedArr[i]!=visited)
        {
            visitedArr[i]=count;
        }
        
        
    }

    for (int i = 0; i < n; i++)
    {
        if (visitedArr[i]!=visited)
        {
            cout << arr[i] << " " << visitedArr[i] << " ";
        }
        
    }
}
