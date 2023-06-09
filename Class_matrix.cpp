#include <iostream>
class Matrix
	{
		public:
		int inporting()
			{
				int size = 0;
				std :: cout << "Please insert the size of matrix" << std :: endl;
				std :: cin  >> size;
				if(size <= 0)
				{
					std :: cout << "Size must be grather than " << size << std :: endl;
					return 1;
				}
				else
				{
					return size;
				}	
			}
		int** create_matrix(int size)
			{
				int** array = new int*[size];
				for (int i = 0; i < size; i++)
				{
					array[i] = new int [size];
					for (int i1 = 0; i1 < size; i1++)
						{
							std :: cout << "Please insert [" << i << "] [" << i1 << "]" << std :: endl; 
							std :: cin >> array[i][i1];
						}
				}
				return array;
			}
		void show_matrix(int size, int** array)
			{
    				for (int i = 0; i < size; i++)
    					{
        				for (int i1 = 0; i1 < size; i1++)
        					{
            						std :: cout << array[i][i1] << " ";
        					}
        				std :: cout << "\n";
    					}
			}
		void delete_array(int size, int** array)
			{
    				for (int i = 0; i < size; i++)
    					{
        				delete[] array[i];
        				array[i] = nullptr;
    					}
    				delete[] array;
    				array = nullptr;
			}
		int** change(int size, int** array)
			{
				int temp = 0;
				for(int i = 0; i < size; i++)
					{
				 		temp = 	array[i][i];
            					array[i][i] = array[i][i + 2];
            					array[i][i + 2] = temp;
					}
				return array;
			}		
	};

