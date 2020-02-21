#include <iostream>
#include <string>
#include <fstream>
#include "UnsortedType.h"
#include "StackType.h"
#include "QueueType.h"
#include "UnsortedType.cpp"
#include "StackType.cpp" 
#include "QueueType.cpp"

using namespace std;
using std::strlen;
void GetNextLine(ifstream &inFile, char *line, int lineLen)
{
    int done = false;
    while (!done)
    {
        inFile.getline(line, 128);
        if (inFile.good())
        {
            if (strlen(line) == 0)
                continue;
            else if (line[0] == '#')
                continue;
            else done = true;
        }
        else
        {
            strcpy(line, "");
            return;
        }
    }
}

int main()
{
    StackType <char> st, st2;
    QueueType <string> qt, qt2;
    UnsortedType <string> us, us2;
    st.Push('X');
    st.Push('X');
    st.Push('X');
    st.Push('X');
    st.Push('X');
    string k;
    bool ad;
    char str[100], name[100];
    string word;
    string pl;
    bool ef;
    bool b = false;
    int count = 0, ct = 0;
    ofstream myfile;
    myfile.open("‪C:\\Users\Shaan\Google Drive\Fall 2019\CSE 225\Assignment\CSE225_Fall19_Assignment\shoplog.txt");
    myfile << "Output File.\n";
    ifstream File;
    File.open(" ‪C:\\Users\Shaan\Google Drive\Fall 2019\CSE 225\Assignment\CSE225_Fall19_Assignment\shopevents.txt");
    do {

        while (true)
        {
            GetNextLine(inFile, str, strlen(str));
            if (inFile.good()) 
            {
                myfile << str << "\n";
                break;
            }
        }
    }

    if(str == "CLOSE") {
        ef = 1;
    }
    if (ef == 0) {
        istringstream ss(str);
        string hel;
        do {
            ss >> word;
            if (word == "ARRIVE") {
                ad = 1;
            }
            else if (word == "LEAVE")
            {
                ad = 0;
            }
        } while (ss);
        if (ad == 1)
        {
            if (!st.IsEmpty())
            {
                st.Pop;
                us.InsertItem(word);
            }
            else
            {
                qt.Enqueue(word);
            }
        }
        else 
        {
            us.RetrieveItem(word, b);
            if (b != false) {
                us.DeleteItem(word);
                if (!qt.IsEmpty()) {
                    qt.Dequeue(p1);
                    us.InsertItem(p1);
                }
                else
                {
                    st.Push('X');
                }
            }
        }

    }
    ad = "";
    string value;
    myfile << "Customers in shop" << endl;
      
}