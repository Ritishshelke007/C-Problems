#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sortStrings(string names[], int n)
{
    
    string temp;
 
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (names[j] < names[i])
            {
                temp=names[i];
                names[i] = names[j];
                names[j] =temp;
            }
        }
    }
}


int main()
{
    int n;
    string names[20];
    cin >> n;
   
   //void sortStrings(string [], int);
    

    //cout << "Enter Names to Sort : "<<endl;
    
    for(int i=0; i<n; i++){
        cin >> names[i];
    }
    
   // cout << "Unsorted Array : "<<endl;
   
    sortStrings(names, n);
    
   // cout << "Sorted Array : "<<endl;
    
    for(int i=0; i<n; i++){
        cout << names[i] << "\n";
    }
    
    
    return 0;
}



