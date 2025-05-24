//#include <iostream>
//using namespace std;
//
//class Matrix {
//    int** data;
//    int row;
//    int col;
//
//public:
//    // Constructor
//    Matrix(int x = 0, int y = 0) : row(x), col(y) {
//        if (x <= 0 || y <= 0) {
//            row = col = 0;
//            data = nullptr;
//            return;
//        }
//        data = new int* [x];
//        for (int i = 0; i < x; i++) {
//            data[i] = new int[y]; // Initialize elements to 0
//        }
//        
//        for (int i = 0; i < row; i++) {
//            for (int j = 0;j < col; j++) {
//                data[i][j] = 0;
//            }
//        }
//
//    }
//
//    // Copy Constructor (Deep Copy)
//    Matrix(const Matrix& m) : row(m.row), col(m.col) {
//        if (m.row <= 0 || m.col <= 0) {
//            row = col = 0;
//            data = nullptr;
//            return;
//        }
//        data = new int* [row];
//        for (int i = 0; i < row; i++) {
//            data[i] = new int[col];
//            for (int j = 0; j < col; j++) {
//                data[i][j] = m.data[i][j]; // Deep copy elements
//            }
//        }
//    }
//
//    void setNumber(int row = 0, int col = 0, int val = 0) {
//        this->data[row - 1][col - 1] = val;
//    }
//
//    void getNumber(int row, int col) {
//        cout << this->data[row - 1][col - 1] << " ";
//    }
//
//    static Matrix* identity(int n) {
//        Matrix* m = new Matrix(n,n);
//        for (size_t i = 0; i < n; i++)
//        {
//            for (size_t j = 0; j < n; j++)
//            {
//                if (i==j)
//                {
//                    m->data[i][j] = 1;
//                }
//            }
//        }
//
//        cout << *m;
//
//        return m;
//    }
//
//
//
//    //// Display function (optional, for debugging)
//    //void display() const {
//    //    cout << "Matrix contents:" << endl;
//    //    for (int i = 0; i < row; i++) {
//    //        for (int j = 0; j < col; j++) {
//    //            cout << data[i][j] << " ";
//    //        }
//    //        cout << endl;
//    //    }
//    //}
//
//    // Stream insertion operator
//    friend ostream& operator<<(ostream& os, const Matrix& m) {
//        os << "Rows: " << m.row << endl;
//        os << "Cols: " << m.col << endl;
//        if (m.row == 0 || m.col == 0) {
//            os << "Empty matrix" << endl;
//            return os;
//        }
//        for (int i = 0; i < m.row; i++) {
//            for (int j = 0; j < m.col; j++) {
//                os << m.data[i][j] << " ";
//            }
//            os << endl; // Use os instead of cout
//        }
//        return os;
//    }
//
//    // Destructor
//    ~Matrix() {
//        ////if(this->data != nullptr){
//        //    for (int i = 0; i < row; i++) {
//        //        delete this->data[i];
//        //    }
//        //    delete[] this->data;
//        ////}
//    }
//};
//
//int main() {
//    Matrix m(3, 3); // No need for dynamic allocation
//    cout << m; // Prints the matrix (all elements are 0)
//
//    Matrix *m1 = Matrix::identity(5);
//    delete[] m1;
//    return 0;
//}