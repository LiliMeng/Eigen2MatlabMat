//
//  vnl_eigen_matlab.h
//  RandomFeatureRegistration
//
//  Created by Lili on 12/10/16.
//  Copyright (c) 2016 UBC. All rights reserved.
//

#ifndef __RandomFeatureRegistration__vnl_eigen_matlab__
#define __RandomFeatureRegistration__vnl_eigen_matlab__

#include <iostream>
#include <vector>
#include <fstream>
#include "Eigen/Core"
#include "Eigen/Dense"
#include "vnl_matlab_write.h"

using namespace std;

// code to perform Matlab binary file operations
// VNL_Eigen_Matlab_filewrite is a collection of I/O
// functions matrices in the compact MATLAB binary format (.mat)

class VNL_Eigen_Matlab_filewrite
{
public:
    
    void static doubleMatrix_filewrite(Eigen::MatrixXd const eigen_matrix, int row, int column, const char* file_name);
    
    void static doubleVector_filewrite(Eigen::VectorXd const eigen_vector, int row, const char* file_name);
    

};


#endif /* defined(__RandomFeatureRegistration__vnl_eigen_matlab__) */
