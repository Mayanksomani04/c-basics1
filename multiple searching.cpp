#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    ifstream infile;
    string paragraph;
    string search;
    infile.open("demo.txt");
    cout << "Type the text you want to search ";
    getline(cin, search);
    if (infile.fail())
    {
        cout << " Your file didn't work ";
    }
    else
    {
        while (getline(infile, paragraph))
        {
            //    cout<<"paragraph"<<paragraph<<endl;
            int length;
            length = paragraph.size();
            // cout << "length2: " << length2;
            int length1;
            length1 = search.length();
            // cout << "length1: " << length1;
            int i = 0, j = 0, count = 0;
            while (i < length && j < length1)
            {
                if (paragraph[i] == search[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    i++;
                    j = 0;
                }
                if (j >= length1)
                {
                    cout << "Match found at index " << i - length1;
                    count++;
                    j = 0;
                }
            }
            if (count == 0)
            {
                cout << "No match found";
            }
        }

    }
        infile.close();
}
