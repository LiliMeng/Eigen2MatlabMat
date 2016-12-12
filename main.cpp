#include "vnl_eigen_matlab.h"

void test_eigen2Matlab()
{
    unsigned row =3, col=3;
    Eigen::MatrixXd m_eigen=Eigen::MatrixXd::Random(row, col);
    
    Eigen::VectorXd eigen_vec=Eigen::VectorXd::Random(row);
    
    const char* file_name_matrix = "test1";
    const char* file_name_vector = "test2";
    
    VNL_Eigen_Matlab_filewrite::doubleMatrix_filewrite(m_eigen, row, col, file_name_matrix);
    VNL_Eigen_Matlab_filewrite::doubleVector_filewrite(eigen_vec, row, file_name_vector);
    
}

int main(int argc, const char * argv[])
{
    

    test_eigen2Matlab();
    
    return 0;
}


