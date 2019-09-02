#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

map <string, int> st;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int quer, i=0,j=0,type=0,marks=0,value=0;
    string stud;
    cin >> quer;

    while(i < quer)
    { 
        cin >> type;
        if(type == 1)
        {
           cin >> stud;
           cin >> marks;
           map<string,int>::iterator itr=st.find(stud);
           if(itr != st.end())
              st[stud] = st[stud] + marks;    //value = st[stud];
           else
              st[stud] = marks;
        }

        if(type == 2)
        {
          cin >> stud;
          st.erase(stud); 
        }

        if(type ==3)
        {
           cin >> stud;
           //value = st[stud];
           map<string,int>::iterator itr=st.find(stud);
           if(itr != st.end())
               cout << st[stud] << endl;
           else
              cout << 0 << endl;
        }

        i++;
    }

    return 0;
}




