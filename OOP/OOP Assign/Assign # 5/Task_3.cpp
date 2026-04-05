// Hafiz Muhammad Saeed (25-CS-005)

#include <iostream>
using namespace std;

class MATRIX
{
    friend MATRIX sum_matrix( MATRIX &obj1, MATRIX &obj2 );

    private:
    int arr[3][3];

    public:
    MATRIX()
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                arr[i][j] = 0;
            }
        }
    }

    void set_matrix();
    void display();
};

void MATRIX :: set_matrix()
{
    cout << "Enter entries of 3x3 Matrix" << endl;
    for(int i=0; i<3; i++)
    {
        cout << "Enter 3 values for row " << i + 1 << ": ";
        for(int j=0; j<3; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
}

MATRIX sum_matrix( MATRIX &obj1, MATRIX &obj2 )
{
    MATRIX sum;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum.arr[i][j] = obj1.arr[i][j] + obj2.arr[i][j];
        }
    }

    return sum;
}

void MATRIX :: display()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;

}

int main()
{
    MATRIX matrix1;
    matrix1.set_matrix();
    cout << "Matrix 1:" << endl;
    matrix1.display();

    MATRIX matrix2;
    matrix2.set_matrix();
    cout << "Matrix 2:" << endl;
    matrix2.display();

    MATRIX result = sum_matrix(matrix1, matrix2);
    cout << "Resultant Matrix:" << endl << " A + B " << endl;
    result.display();


}
