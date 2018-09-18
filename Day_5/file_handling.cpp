//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//int main()
//{
////    char data[100];
////
////    ofstream outfile;
////    outfile.open("afile.txt", ios_base::ate);
////
////    cout << "Write To File" << endl;
////    cout << "Enter your name: ";
////    cin.getline(data, 100);
////    outfile << data << endl;
////
////    cout << "Enter age: ";
////    cin >> data;
////    cin.ignore();
////    outfile << data << endl;
////
////    cout << "Enter Employee ID: ";
////    cin >> data;
////    cin.ignore();
////    outfile << data << endl;
////
////    outfile.close();
////
////    ifstream infile;
////
////    infile.open("afile.bin", ios_base::in);
////
////    cout << "Opening File" << endl;
////
////    while(!infile.eof())
////    {
////        infile.getline(data, 100);
////        cout << data << endl;
////    }
////    infile.close();
////
//
//    ofstream outfile;
//    outfile.open("CHARS.txt", ios_base::app);
//    char ch;
//    char str[256];
//
//    cout << "Type some text (type a dot to finish):\n";
//    int i = 0;
//    do
//    {
//        //cin.get(str, 256);
//        ch = cin.get();
//        str[i++] = ch;
//        outfile.put(ch);
//    }
//    while (ch!='.');
//
//    outfile.close();
//
//    ifstream infile;
//    char c;
//
//    infile.open("CHARS.txt", ios_base::in);
//    //cin.get(str, 256);
//
//    while (infile.get(c) && !infile.eof())
//    {
//        if ((c != ' ') && (c != '\n') && (c != '.'))
//            cout.put(c);
//        else if (c != '.')
//            cout.put('\n');
//    }
//
//    infile.close();
//    ifstream ifile ("CHARS.txt",ios_base::binary);
//    ofstream ofile ("new.txt",ios_base::binary);
//
//    // get size of file
//    ifile.seekg(0,infile.end);
//    long size = ifile.tellg();
//    ifile.seekg(0);
//
//    // allocate memory for file content
//    char* buffer = new char[size];
//
//    // read content of infile
//    ifile.read(buffer,size);
//
//    // write to outfile
//    ofile.write(buffer,size);
//
//    // release dynamically-allocated memory
//    delete[] buffer;
//
//    ofile.close();
//    ifile.close();
//
//    return 0;
//}
