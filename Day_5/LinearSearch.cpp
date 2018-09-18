//#include <iostream>
//
//using namespace std;
//
//int LinearSearch(int List[], int length, int SearchItem)
//{
//    int IndexOfItem;
//    bool isDataFound = false;
//
//    for (IndexOfItem = 0; (IndexOfItem < length && isDataFound == false); IndexOfItem++)
//    {
//        if (List[IndexOfItem] == SearchItem)
//            isDataFound = true;
//        else
//            isDataFound = false;
//    }
//
//    if (isDataFound == true)
//        return IndexOfItem;
//    else
//        return -1;
//}
//
//int main()
//{
//    int MAX = 10;
//    int item;
//    int List[MAX] = {1,9,3,4,6,2,7,8,5};
//
//    item = LinearSearch(List,MAX,5);
//
//    cout << item << endl;
//
//}
