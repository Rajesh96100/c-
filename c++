#include <bits/stdc++.h>
using namespace std;
bool csort(const vector<int>& v1, const vector<int>& v2)
{
    return v1[1] < v2[1];
}

int main(){
    srand(time(0));
    vector<vector<int> > arr;
    int rows;
    cout<<"enter row"<<endl;
    cin>>row;
    int cols;
    cout<<"enter cols"<<endl;
    cin>>cols;
    arr[rows][cols];

    for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
            arr[i][j] = (rand() % 100);

    
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    sort(arr.begin();arr.end(),csort);
    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

  return 0;
}
