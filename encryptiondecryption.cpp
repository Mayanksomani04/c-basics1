#include <iostream>
#include <fstream>
using namespace std;
int main(){
     fstream new_file;
    new_file.open("/home/mayank/Documents/C++ basics/input.txt", ios::in);
    string tp;
    if (!new_file)
    {
        cout << "No such file";
    }
    else{
        int n,i;
        
        char ch;
        while (getline(new_file, tp)){
            n=tp.length();
            // cout<<tp;
            for(int i=0;i<n;i++){
            tp[i]=toupper(tp[i]);
            }
        for(int i=0;i<n;i++){
            
            ch=tp[i];
            if(ch >= 'A' and ch <= 'Z'){
                tp[i]=((ch-65+13)%26)+65;
                // tp[i]=(ch%26)+65;
                // cout<<ch;
            }
            cout<<tp[i];
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            ch=tp[i];
            //cout<<ch;
            if(ch >= 'A' and ch <= 'Z'){
                tp[i]=((ch+65-13)%26)+65;
                // tp[i]=65+(90-(ch%26));
            }
             cout<<tp[i];
        }
        
    }
    }
    new_file.close();
return 0;
}