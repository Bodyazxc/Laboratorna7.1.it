#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna7.1it/Laboratorna7.1it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71it
{
	TEST_CLASS(UnitTest71it)
	{
	public:
		
        TEST_METHOD(TestCalc)
        {
            const int rowCount = 3;
            const int colCount = 3;
            int sum = 0;
            int count = 0;
            int** T = new int* [rowCount];

            
            for (int i = 0; i < rowCount; i++)
                T[i] = new int[colCount];

            T[0][0] = -4; T[0][1] = 0; T[0][2] = 1;  
            T[1][0] = 2;  T[1][1] = 1; T[1][2] = -5;
            T[2][0] = -6; T[2][1] = -1; T[2][2] = 4; 

            Calc(T, rowCount, colCount, sum, count);

            Assert::AreEqual(-16, sum); 
            Assert::AreEqual(5, count); 

            for (int i = 0; i < rowCount; i++)
                delete[] T[i];
            delete[] T;
        }
	};
}
