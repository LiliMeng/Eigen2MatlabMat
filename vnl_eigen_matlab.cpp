//
//  vnl_eigen_matlab.cpp
//  RandomFeatureRegistration
//
//  Created by Lili on 12/10/16.
//  Copyright (c) 2016 UBC. All rights reserved.
//

#include <vector>
#include <fstream>
#include <iostream>
#include "Eigen/Core"
#include "Eigen/Dense"
#include "vnl_eigen_matlab.h"


using namespace std;

// code to perform Matlab binary file operations
// VNL_Eigen_Matlab_filewrite is a collection of I/O
// functions matrices in the compact MATLAB binary format (.mat)

void VNL_Eigen_Matlab_filewrite::doubleMatrix_filewrite(Eigen::MatrixXd const eigen_matrix, int row, int column, const char* file_name)
{
    std::fstream os;
    
    const string mat_filename=((string)file_name+".mat").c_str();
    
    os.open(mat_filename, std::ios::out | std::ios::binary);
    
    double** data_2d = new double*[row];
    
    for(int i = 0; i < row; ++i)
    {
        data_2d[i] = new double[column];
    }
    
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            data_2d[i][j]=eigen_matrix(i,j);
        }
    }
    
    vnl_matlab_write<double>(os, data_2d, row, column, file_name);
    
}

void VNL_Eigen_Matlab_filewrite::doubleVector_filewrite(Eigen::VectorXd const eigen_vector, int row, const char* file_name)
{
    
    std::fstream os;
    
    const string mat_filename=((string)file_name+".mat").c_str();
    
    os.open(mat_filename, std::ios::out | std::ios::binary);

    
    double data_vector[row];
    
    for(int i=0; i<row; i++)
    {
        data_vector[i]=eigen_vector(i);
    }
    
    
    vnl_matlab_write<double>(os,  data_vector, 3, file_name);

}
