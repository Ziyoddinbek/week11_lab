#include <iostream>
using namespace std;
const int SIZE=4;
double sumColumn(const double m[][SIZE], int rowSize, int columnIndex){
    double sum=0;
    for(int i=0;i<rowSize;i++) {
        sum+=m[i][columnIndex];
    }
    return sum;

}
int main() {
    int rows;
    cout<<"Rows: ";
    cin>>rows;
    cout<<rows<<"\n";

}