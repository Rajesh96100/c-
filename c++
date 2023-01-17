#include <bits/stdc++.h>

using namespace std;

void creatematrix(vector<vector<int> >& v,int r,int c)
{
   
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            v[i][j] = (rand() % 100);
        }
    }

}
void sort(vector<vector<int> >& v)
{
    for(int x = 0;x<v.size();x++)
    {
    for(int i = 0;i<v[x].size();i++)
    {
        for(int j = i;j<v[x].size();j++)
        {
            if(v[i][x] > v[j][x])
            {
                int t = v[i][x];
                v[i][x] = v[j][x];
                v[j][x] = t;
            }
        }
    }
    }
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
   
    vector<vector<int> > v(rows,vector<int>(cols,0));
    creatematrix(v,rows,cols);
    printarray(v);
    sort(v);
    printarray(v);

  return 0;
}
