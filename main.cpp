#include <iostream>
#ifndef Class_matrix
#define Class_matrix
#include "Class_matrix.cpp"
#endif
int main(int argc, char** argv)
{
	Matrix matrix;
	int size = matrix.inporting();
	int** array = matrix.create_matrix(size); 
	matrix.show_matrix(size, array);
	matrix.change(size, array);
	matrix.show_matrix(size, array);
	matrix.delete_array(size, array);
	return 0;

}
