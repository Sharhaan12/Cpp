#include <iostream>
using namespace std;

// Function to add two matrices
void addMatrices(int r, int c, int m1[][10], int m2[][10], int result[][10])
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int r, int c, int m1[][10], int m2[][10], int result[][10])
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            result[i][j] = m1[i][j] - m2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int r1, int c1, int m1[][10], int r2, int c2,
                      int m2[][10], int result[][10])
{
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            result[i][j] = 0;

            for(int k = 0; k < c1; k++)
            {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

// Function to transpose a matrix
void transposeMatrix(int r, int c, int m[][10], int result[][10])
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            result[j][i] = m[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int r, int c, int m[][10])
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout << m[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int m1[10][10], m2[10][10], result[10][10];
    int r1, c1, r2, c2, choice;

    cout << "Enter rows and columns for Matrix 1: ";
    cin >> r1 >> c1;

    cout << "Enter elements of Matrix 1:\n";

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            cin >> m1[i][j];
        }
    }

    cout << "Enter rows and columns for Matrix 2: ";
    cin >> r2 >> c2;

    cout << "Enter elements of Matrix 2:\n";

    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cin >> m2[i][j];
        }
    }

    cout << "\n1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Transpose M1\n";
    cout << "5. Transpose M2\n";
    
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            if(r1 == r2 && c1 == c2)
            {
                addMatrices(r1, c1, m1, m2, result);

                cout << "\nResult of Addition:\n";
                displayMatrix(r1, c1, result);
            }
            else
            {
                cout << "Addition not possible\n";
            }

            break;
        }

        case 2:
        {
            if(r1 == r2 && c1 == c2)
            {
                subtractMatrices(r1, c1, m1, m2, result);

                cout << "\nResult of Subtraction:\n";
                displayMatrix(r1, c1, result);
            }
            else
            {
                cout << "Subtraction not possible\n";
            }

            break;
        }

        case 3:
        {
            if(c1 == r2)
            {
                multiplyMatrices(r1, c1, m1, r2, c2, m2, result);

                cout << "\nResult of Multiplication:\n";
                displayMatrix(r1, c2, result);
            }
            else
            {
                cout << "Multiplication not possible\n";
            }

            break;
        }

        case 4:
        {
            transposeMatrix(r1, c1, m1, result);

            cout << "\nTranspose of Matrix 1:\n";
            displayMatrix(c1, r1, result);

            break;
        }

        case 5:
        {
            transposeMatrix(r2, c2, m2, result);

            cout << "\nTranspose of Matrix 2:\n";
            displayMatrix(c2, r2, result);

            break;
        }

        default:
        {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}