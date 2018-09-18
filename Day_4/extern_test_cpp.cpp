//#include <iostream>
//
//using namespace std;
//
////extern "C"
////{
////#include "extern_test_c.h"
////}
////
////void cppPrint()
////{
////    print();
////}
//
//void BubbleSort(int x[], int n) // Bubble Sort Function stopping when done
//{
//	bool swap;
//	float test1,test2;
//	int cntr;
//
//	do
//	{
//		swap=false;
//		for(cntr=0;cntr<n-1;cntr++)
//		{
//			test1=x[cntr];
//			test2=x[cntr+1];
//			if(test2<test1)
//			{
//				x[cntr]=test2;
//				x[cntr+1]=test1;
//				swap=true;
//			}
//		}
//	}while(swap);
//
//	cout << "Bubble Sort" << endl;
//    for (int t = 1; t < n; t++)
//    {
//        cout << x[t] << endl;
//    }
//
//}
//
//void SelectionSort(int List[], int length)
//{
//    for (int index = 0; index < length-1; index++)
//    {
//        int smallestIndex = index;
//        for (int location = index+1; location < length; location++)
//        {
//            if (List[location] < List[smallestIndex])
//            {
//                smallestIndex = location;
//            }
//        }
//        int temp = List[smallestIndex];
//        List[smallestIndex] = List[index];
//        List[index] = temp;
//    }
//    cout << "Selection Sort" << endl;
//    for (int t = 1; t < length; t++)
//    {
//        cout << List[t] << endl;
//    }
//}
//
//int main()
//{
//    int MAX = 31;
//    int List[MAX] = {55, 60, 30, 16,
//                    13, 06, 27, 24,
//                    50, 15, 44, 51,
//                    46, 3, 20, 45,
//                    47, 58, 9, 37,
//                    17, 40, 2, 56,
//                    43, 31, 29, 35,
//                    18, 53};
//
//    BubbleSort(List, MAX);
//
//    SelectionSort(List, MAX);
//    return 0;
//}
