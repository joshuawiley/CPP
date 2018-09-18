//#include <iostream>
//using namespace std;
//int* SelectionSort(int List[], int length)
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
//
//    cout << "Selection Sort" << endl;
//    for (int t = 1; t < length; t++)
//    {
//        if ((t%2) == 1)
//            cout << List[t] << ", ";
//        else
//            cout << List[t] << ", \n";
//    }
//
//    return List;
//}
//
//int BinarySearch(int List[], int length, int SearchItem)
//{
//    int StartIndex = 0;
//    int End = length-1;
//    int Mid;
//    bool isDataFound = false;
//
//    while (StartIndex <= End && isDataFound == false)
//    {
//        Mid = (StartIndex + End)/2;
//
//        if (List[Mid] == SearchItem)
//            isDataFound = true;
//        else if (List[Mid] > SearchItem)
//            End = Mid-1;
//        else
//            StartIndex = Mid+1;
//    }
//
//    if (isDataFound == true)
//        return Mid;
//    else
//        return -1;
//}
//
//int main()
//{
//    int MAX = 61, res, input;
//    int List[MAX] = {21, 8, 3, 4, 15, 37,
//                     4, 37, 20, 19, 06,
//                     18, 22, 31, 14, 12,
//                     59, 41, 45, 57, 9,
//                     20, 53, 27, 41, 50,
//                     41, 20, 57, 7, 40,
//                     29, 47, 57, 55, 10,
//                     16, 55, 23, 11, 51,
//                     18, 5, 12, 57, 33,
//                     29, 8, 55, 53, 30,
//                     60, 13, 40, 28, 29,
//                     58, 59, 52, 53, 54};
//
//    // BubbleSort(List, MAX);
//    cout << "Enter a Number between 1 and 60: ";
//    cin >> input;
//    //SelectionSort(List, MAX);
//
//    res = BinarySearch(SelectionSort(List, MAX), MAX, input);
//    cout << "Item Index: " << res << endl;
//    return 0;
//}
