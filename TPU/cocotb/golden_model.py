import numpy as np

class sa_golden_model:

    Matrix_C = None
    
    
    def matmul(self, Number_matrixs, Matrix_A, Matrix_B):
        temp_list = []
        for i in range(0, Matrix_A.shape[0], 2):
            block_A = Matrix_A[i:i+2, 0:2]
            block_B = Matrix_B[i:i+2, 0:2]
            block_C = block_A @ block_B
            block_C[[0,1]] = block_C[[1,0]]
            temp_list.append(block_C)

        self.Matrix_C = np.vstack(temp_list)

