#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ofstream out;
    out.open("CHARS.bin", ios_base::binary | ios_base::trunc);

    char *str = new char[256];

    for (int i = 0; i < 256; i++)
    {
        str[i] = (char)i;
        out.put(str[i]);
        out.put('\n');
        out.flush();
    }

    out.close();

    ifstream in;
    in.open("CHARS.txt", ios_base::binary);
    char c;
    while(in.get(c) && !in.eof())
    {
        cout.put((char)c);
    }
    in.close();

    cout << "Double TXT" << endl;
    out.open("double.txt", ios_base::binary | ios_base::trunc);
    in.open("double.txt", ios_base::binary);

//    in.seekg (0,infile.end);
    long size = in.tellg();
    in.seekg (0);
    char *buf = new char[256];
    for (int j = 0; j < 256; j++)
    {
        buf[j] = (char)j;

        //cout.write(buf,sizeof(buf)*126);
        //out.write('\n');
    }
    out.write(buf,sizeof(buf)*126);
    out.close();
    in.close();

    delete[] str;
}
