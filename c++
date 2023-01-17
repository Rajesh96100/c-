#include <bits/stdc++.h>

using namespace std;
bool csort(const vector<int>& v1, const vector<int>& v2)
{
    return v1[1] < v2[1];
}
vector<vector<int> > creatematrix(int r,int c)
{
    vector<vector<int> > v;
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            v[i][j] = (rand() % 100);
        }
    }
    return v;
}
void printarray(vector<vector<int> >& v)
{
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int rows;
    int cols;
    cout<<"enter no of rows"<<endl;
    cin>>rows;
    cout<<"enter the no of cols"<<endl;
    cin>> cols;

    vector<vector<int> > v =  creatematrix(rows,cols);
    printarray(v);
    sort(v.begin(),v.end(),csort);
    printarray(v);

  return 0;
}
