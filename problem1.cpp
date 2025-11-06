#include <iostream>
using namespace std;
const int SIZE=4;
//Problem1
double sumColumn(const double m[][SIZE], int rowSize, int columnIndex){
    double sum=0;
    for(int i=0;i<rowSize;i++) {
        sum+=m[i][columnIndex];
    }
    return sum;

}

//Problem2
double sumMajorDiagonal(const double m[][SIZE]) {
    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (i == j) {
                sum += m[i][j];
            }
        }
    }
    return sum;
}
//Problem3
const int N=4;
void multiplyMatrix(const double a[][N],
const double b[][N], double c[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

//Problem4
int findMax(const int arr[][100], int n, int m) {
    int max = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main() {

    //Problem1
    int rows;
    cout<<"Rows: ";
    cin>>rows;
    double arr[rows][SIZE];
    for(int i=0;i<rows;i++) {
        for(int j=0;j<SIZE;j++) {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<rows;i++) {
        cout<<"Sum of columns "<<i<<"="<<sumColumn(arr, rows,i)<<endl;
    }

    //Problem2
    double array[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> array[i][j];
        }
    }
    cout<<sumMajorDiagonal(array)<<endl;

    //Problem3
    cout<<"M1: ";
    double aarray[N][N];
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            cin >> aarray[i][j];
        }
    }
    cout<<endl;
    cout<<"M2: ";
    double barray[N][N];
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            cin >> barray[i][j];
        }
    }
    cout<<endl;
    double carray[N][N];

    multiplyMatrix(aarray,barray,carray);
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            cout<<carray[i][j]<<" ";
        }
        cout<<endl;
    }

    //Problem4
    int n,m;
    cout<<"m= ";
    cin>>m;
    cout<<"N= ";
    cin>>n;
    int ar[100][100];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>ar[i][j];
        }
    }
    cout<<"the maximum number is: "<<findMax( ar, m, n)<<endl;

    //Problem5
    int m1, n1;
    cout<<"m= ";
    cin>>m1;
    cout<<"n= ";
    cin>>n1;
    int ar2[100][100];
    for(int i=0;i<m1;i++) {
        for(int j=0;j<n1;j++) {
            cin>>ar2[i][j];
        }
    }
    int ar3[100][100];
    for(int i=0;i<m1;i++) {
        for(int j=0;j<n1;j++) {
            cout<<ar2[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Problem6

    int col, row;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"Enter column: ";
    cin>>col;
    int ar4[row][col];
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cin>>ar4[i][j];
        }

    }
    for(int i=0;i<row;i++) {
        double sum1=0;
        for(int j=0;j<col;j++) {
            sum1+=ar4[i][j];
        }
        cout<<"The average of row "<<i<<"is ="<<double(sum1)/col<<endl;
    }

    //Problem7
    int matrix;
    cin>>matrix;
    int o=matrix;
    int p=matrix;
    int arr2[o][p];
    for(int i=0;i<o;i++) {
        for(int j=0;j<p;j++) {
            cin>>arr2[i][j];

            }
        }
    bool matrix1=false;
    for(int i=0;i<o;i++) {
        for(int j=0;j<p;j++) {
            if (arr2[i][j]!=arr2[j][i]) {
                matrix1=true; break;
            }
        }
        if (matrix1) break;
    }
    if (matrix1) {
        cout<<"The matrix is not symmetric";
    }
    else{ cout<<"The matrix is symmetric";}

    //Problem8
    int grade;
    cin >> grade;
    vector<int> grades(grade);
    for (int i=0; i<grade; i++) {
        cin >> grades[i];
    }
    int maxGrade=grades[0];
    for (int i=1; i<grade; i++) {
        if (grades[i]>maxGrade) {
            maxGrade=grades[i];
        }
    }
    cout <<"Maximum element: "<< maxGrade << endl;
    int minGrade=grades[0];
    for (int i=1; i<grade; i++) {
        if (grades[i]<minGrade) {
            minGrade=grades[i];
        }
    }
    cout << "Minimum element: "<<minGrade << endl;
    double sum=0;
    for (int i=0; i<grade; i++) {
        sum+=grades[i];
    }
    cout <<"Average of all elements: "<<double(sum)/grade << endl;

    //Problem9
    int zero;
    cout<<"Enter the number of elements: ";
    cin>>zero;
    vector<int> negative(zero);
    for (int i = 0; i < zero; i++) {
        cin >> negative[i];
    }

    for (int i = 0; i < zero; i++) {
        if (negative[i] < 0 || negative[i] ==0) continue;
        cout<<negative[i]<<" ";
    }

    //Problem10
    int strict;
    cout<<"Enter the number of elements: ";
    cin>>strict;
    vector<int> small(strict);
    for (int i = 0; i < strict; i++) {
        cin >> small[i];
    }
    for (int i = 1; i < strict-1; i++) {
        if (small[i]< small[i+1] && small[i]<small[i-1]) {
            cout<<small[i]<<" ";
        }
    }




return 0;
}