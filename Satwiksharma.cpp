
#include <bits/stdc++.h>
using namespace std;
void sortMatrix(vector<vector<int>> &matrix, int colindex) {
    sort(matrix.begin(), matrix.end(),
         [colindex](const vector<int> &a, const vector<int> &b) {
             return a[colindex] < b[colindex];
         });
}
//Part A
vector<vector<int>> CreateList(int rows,int col){
    vector<vector<int>> matrix(rows,vector<int>(col,0));
    for(int i=0;i<rows;i++)
        for(int j=0;j<col;j++)
            matrix[i][j]=rand()%100;
    return matrix;
}
int main() {
    cout<<"Satwik Sharma JIIT"<<endl;
    cout<<"PART A"<<endl;
    int rows,cols;
    cout<<"Enter no. of rows"<<endl;
    cin>>rows;
    cout<<"Enter no. of cols"<<endl;
    cin>>cols;
    vector<vector<int>> matrix = CreateList(rows,cols);

    cout << "Original Matrix: " << endl;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"\nPART B"<<endl;
    int colindex;
    //taken 0 based indexing
    cout<<"\nEnter col index for which you want to sort"<<endl;
    cin>>colindex;
    sortMatrix(matrix, colindex);

    cout << "\nMatrix sorted by column "<<colindex << endl;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}