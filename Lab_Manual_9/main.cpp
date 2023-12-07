#include <bits/stdc++.h>
using namespace std;
/*
---------------------------------------------------------------------------------
Uncomment any one task to run it.
---------------------------------------------------------------------------------
*/
/*
---------------------------------------------------------------------------------
Functions for LAB TASK 2
---------------------------------------------------------------------------------
*/
/*
void add3x3matrix(int m1[][3], int m2[][3], int r[][3]) {
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++)
            r[i][j] = m1[i][j]+m2[i][j];
    }
}
void get3x3matrix(int arr[][3]){
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<"Enter element at position "<<i<<","<<j<<": ";
            cin>>arr[i][j];
        }
    }
}
*/
/*
---------------------------------------------------------------------------------
Functions for LAB TASK 3
---------------------------------------------------------------------------------
*/
/*
void transpose3x3(int original[][3], int transpose[][3]) {
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            transpose[j][i] = original[i][j];
        }
    }
}
*/
/*
---------------------------------------------------------------------------------
Functions for LAB TASK 4
---------------------------------------------------------------------------------
*/
/*
void multiply3x3(int arr1[][3], int arr2[][3], int result[][3]) {
    int sum;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            sum = 0;
            for (int k=0; k<3; k++) {
                sum += arr1[i][k]*arr2[k][j];
            }
            result[i][j] = sum;
        }
    }
}
void get3x3matrix(int arr[][3]){
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<"Enter element at position "<<i<<","<<j<<": ";
            cin>>arr[i][j];
        }
    }
}
*/
/*
---------------------------------------------------------------------------------
Functions for LAB TASK 5
---------------------------------------------------------------------------------
*/
/*
int table(int num, int mult) {
    if (mult==11)
        return 0;

    cout<<num<<" x "<<mult<<" = "<<num*mult<<endl;
    return table(num, mult+1);
}
*/
/*
---------------------------------------------------------------------------------
Functions for HOME TASK
---------------------------------------------------------------------------------
*/
/*
void adjoint3x3(float arr[][3], float adjoint[][3]) {
    float ad, bc;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            ad = arr[(i+1)%3][(j+1)%3]*arr[(i+2)%3][(j+2)%3];
            bc = arr[(i+1)%3][(j+2)%3]*arr[(i+2)%3][(j+1)%3];
            adjoint[j][i] = (ad-bc);
        }
    }
}
float determinant3x3(float arr[][3]) {
    float determinant=0, x, ad, bc;

    for (int i=0; i<3; i++) {
        x = arr[0][i];
        ad = arr[1][(i+1)%3]*arr[2][(i+2)%3];
        bc = arr[1][(i+2)%3]*arr[2][(i+1)%3];
        determinant += x*(ad-bc);
    }
    return determinant;
}
void inverse3x3(float arr[][3], float adjoint[][3], float inverse[][3], float determinant) {
    adjoint3x3(arr, adjoint);

    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            inverse[i][j] = adjoint[i][j]/determinant;
        }
    }
}
*/
int main()
{

/*
---------------------------------------------------------------------------------
LAB TASK 1
---------------------------------------------------------------------------------
*/
/*
    int rows=3, cols=3, matrix[rows][cols], ldsum=0, rdsum=0;

    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            cout<<"Enter element at position "<<i<<","<<j<<": ";
            cin>>matrix[i][j];
        }
    }

    for (int i=0; i<rows; i++)
        ldsum+=matrix[i][i];

    for (int i=0, j=cols-1; i<rows; i++, j--)
        rdsum+=matrix[i][j];

    cout<<"Left Diagonal Sum: "<<ldsum<<endl;
    cout<<"Right Diagonal Sum: "<<rdsum;
*/

/*
---------------------------------------------------------------------------------
LAB TASK 2 (Also uncomment functions for this task on top of the file)
---------------------------------------------------------------------------------
*/
/*
    // Getting matrices from the user
    int arr1[3][3], arr2[3][3], result[3][3];
    cout<<"Enter 1st Array"<<endl;
    get3x3matrix(arr1);
    cout<<"Enter 2nd Array"<<endl;
    get3x3matrix(arr2);

    // Adding both Matrices
    add3x3matrix(arr1, arr2, result);

    // Printing Final Matrix
    cout<<endl<<"Final Matrix"<<endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
*/
/*
---------------------------------------------------------------------------------
LAB TASK 3 (Also uncomment functions for this task on top of the file)
---------------------------------------------------------------------------------
*/
/*
    int matrix[3][3], transpose[3][3];

    // Getting matrix
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<"Enter element at position "<<i<<","<<j<<": ";
            cin>>matrix[i][j];
        }
    }
    // Transposing Matrix
    transpose3x3(matrix, transpose);

    //Printing the Transposed Matrix
    cout<<endl<<"Transposed Matrix"<<endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
*/
/*
---------------------------------------------------------------------------------
LAB TASK 4 (Also uncomment functions for this task on top of the file)
---------------------------------------------------------------------------------
*/
/*
    int arr1[3][3], arr2[3][3], result[3][3];
    // Get two 3x3 matrices from the user
    cout<<"Enter 1st Matrix"<<endl;
    get3x3matrix(arr1);
    cout<<"Enter 2nd matrix"<<endl;
    get3x3matrix(arr2);
    // Multiply both matrices
    multiply3x3(arr1, arr2, result);
    // Printing Final Matrix
    cout<<endl<<"Final Matrix"<<endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
*/
/*
---------------------------------------------------------------------------------
LAB TASK 5 (Also uncomment functions for this task on top of the file)
---------------------------------------------------------------------------------
*/
/*
    int num;
    cout<<"Enter the number for the table: ";
    cin>>num;

    table(num, 1);
*/
/*
---------------------------------------------------------------------------------
HOME TASK (Also uncomment functions for this task on top of the file)
---------------------------------------------------------------------------------
*/
/*
    float arr[3][3], adjoint[3][3], inverse[3][3], determinant;

    // Getting matrix
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<"Enter element at position "<<i<<","<<j<<": ";
            cin>>arr[i][j];
        }
    }
    // Calculating Determinant
    determinant = determinant3x3(arr);
    if (determinant == 0) {
        cout<<"Inverse does not exists (Determinant = 0)";
        return 1;
    }

    // Calculating Inverse
    inverse3x3(arr, adjoint, inverse, determinant);

    // Printing Inversed Matrix
    cout<<endl<<"Inversed Matrix"<<endl;
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            cout<<inverse[i][j]<<"  ";
        }
        cout<<endl;
    }
*/
    return 0;
}
