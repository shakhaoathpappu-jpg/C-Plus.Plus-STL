
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={10,20,30,40,50};

    // Print vector
    for(int x:v) cout<<x<<" ";
    cout<<"\n";

    // Size and empty
    cout<<"Size: "<<v.size()<<"\n";
    cout<<"Empty: "<<v.empty()<<"\n";

    // Add element
    v.push_back(60);

    // Remove last element
    v.pop_back();

    // Access elements
    cout<<"First: "<<v.front()<<"\n";
    cout<<"Last: "<<v.back()<<"\n";
    cout<<"Index 2: "<<v[2]<<"\n";

    // Insert element at index 2
    v.insert(v.begin()+2,25);

    // Erase element at index 1
    v.erase(v.begin()+1);

    // Sort ascending
    sort(v.begin(),v.end());

    // Sort descending
    sort(v.rbegin(),v.rend());

    // Reverse vector
    reverse(v.begin(),v.end());

    // Find element
    auto it=find(v.begin(),v.end(),30);

    if(it!=v.end())
        cout<<"Found at index: "<<it-v.begin()<<"\n";
    else
        cout<<"Not Found\n";

    // Clear vector
    v.clear();

    cout<<"Size after clear: "<<v.size()<<"\n";

    return 0;
}
