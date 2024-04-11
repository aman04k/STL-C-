#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
          list<int>l;

          l.push_back(20);
          l.push_back(15);
          l.push_front(5);

          for(auto it = l.begin(); it!=l.end(); it++)
          cout<<*it<<" ";


}