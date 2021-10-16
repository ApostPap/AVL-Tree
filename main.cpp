#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstring>

#include "ClassInvertedIndex.h"

using namespace std;

int main()
{
    int choice,a;
    ptr root;

    ClassInvertedIndex tree;
    root = NULL;

    //
    //
    node_child *z,child;


    cout << "Enter 1"  << endl;
    cin>>choice;
    if (choice==1)
    {
        cout<<"\n\t\tADDING NEW NODE"<<endl;
        cout<<"\t\t:::::::::::::\n"<<endl;
        cout<<"Enter a new value: ";
        cin>>a;
        //mine
        string aij;

        ifstream file ("input.txt");
        if (file.is_open())
        {
            while(getline(file,aij))
            {
            //for(int i=0;i<100;i++)
            //{getline(file,aij);
                //cout<<"a"<<endl;
                std::stringstream stream(aij);
                while(1)
                {
                    int n,j;
                    stream >> n >> j;
                    if(!stream)
                    {
                        //cout<<"b"<<endl;
                        break;
                    }
                    //cout<<"c"<<endl;
                    tree.insert(n,j,root);
                    //cout<<"d";
                }
            }
            cout<<"we did it";
            tree.inorder(root);


                file.close();
        }
        else cout<<"Unable to open";
        cout<<"\nThe new value have been added to your tree successfully\n"<<endl;
    }
    return 0;
}
