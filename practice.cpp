// ek vector diya hai usme se duplicates hta ke dsc order me retrun krna hai;
// Input: vector<int> orders = {101, 105, 101, 150, 105, 120, 150};

// Output (Expected): 150, 120, 105, 101
vector<int>res;
set<int >st;
for(auto s:oredr){
    st.insert(s);
}
res.push_back(st);
return reverse(res.begin(),res.end());