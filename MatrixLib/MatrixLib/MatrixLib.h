#pragma once

#ifdef MATRIXLIB_EXPORTS
#define MATRIXLIB_API __declspec(dllexport)
#else
#define MATRIXLIB_API __declspec(dllimport)
#endif

namespace MatrixLib {

	class __declspec(dllexport) Class1
	{
		// TODO: Add your methods for this class here.
	public:
		// Returns a + b  
		static int** addition(int arr1[3][3], int arr2[3][3]);

		static int** subtract(int arr3[3][3], int arr4[3][3]);
		static int** multiply(int a[3][3], int b[3][3]);

		static int**inverse(int a[3][3]);
	};
}