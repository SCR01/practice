#include<bits/stdc++.h>// header file includes every Standard library
using namespace std;// using namespace std for avoiding std:: before every statement


void golu(){
    cout<< "Hello World!"<<endl;//won't return
}

int sum(int a, int b){
    return a+b;//will return the sum of a and b
}

void pairrrr(){//first container of pair is of type int and second container of pair is of type string
    pair<int,int> p1 = {1,2};//pair of integers
    pair<int,string> p2 = {1,"Hello"};//pair of integer and string
    cout<<p1.first<<" "<<p1.second<<endl;//accessing first and second
    cout<<p2.first<<" "<<p2.second<<endl;//accessing first and second
    pair<int,pair<int,int>> p3 = {1,{2,4}};
    cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;//accessing first and second of second
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};//array of pairs
    cout<<arr[0].first<<" "<<arr[0].second<<endl;//accessing first and second of first pair
    cout<<arr[1].first<<" "<<arr[1].second<<endl;//accessing first and second of second pair
    cout<<arr[2].first<<" "<<arr[2].second<<endl;//accessing first and second of third pair
}

void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[0]<<" "<<v[1]<<endl;

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v1(5,55);
    vector<int> v2(5);
    vector<int> v3(5,22);
    vector<int> v4(v3);

    vector<int>:: iterator it = v1.begin();
    it++;
    cout<<*it<<endl;

    vector<int>:: iterator it2 = v1.end();
    // cout<<*it2<<endl;   // ❌ can't dereference end()

    vector<int>:: reverse_iterator it3 = v1.rbegin();
    cout<<*it3<<endl;

    vector<int>:: reverse_iterator it4 = v1.rend();
    // cout<<*it4<<endl;   // ❌ can't dereference rend()

    cout<<v1[0]<<" "<<v1.at(0)<<endl;

    cout<<v.back()<<" ";

    for(vector<int>:: iterator it = v.begin(); it!=v.end();it++){
        cout<<*it<<" ";
    }

    cout<<endl;

    vector<pair<int,int>> vec2 = {{1,2},{3,4},{5,6}};
    for(auto it = vec2.begin(); it!=vec2.end();it++){
        cout << (*it).first << " " << (*it).second << " ";
    }

    
}
int main(){

    int hi = sum(2,3);
    cout<<hi<<endl;
    golu();
    pairrrr();
    explainVector();
    return 0;
}
