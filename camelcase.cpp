#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream new_file;
    new_file.open("/home/mayank/Documents/C++ basics/input.txt", ios::in);
    string paragraph;
    if (!new_file)
    {
        cout << "No such file";
    }
    else
    {
        int n, res_ind = 0;
        

        while (getline(new_file, paragraph))
        {

            n = paragraph.length();
            for (int i = 0; i < n; i++)
            {
                if (paragraph[i] == ' ')
                {
                    paragraph[i + 1] = toupper(paragraph[i + 1]);
                    continue;
                }
                // else
                // {
                //     tp[res_ind++] = tp[i];
                // }
            }
            paragraph[0] = tolower(paragraph[0]);
            for(int i =0; i<n;i++){
                if(paragraph[i] != ' ')
                    cout<<paragraph[i];
            }
        }
    }


new_file.close();
return 0;
}
