class Solution
{
public:
    vector<int> majorityElement(vector<int> &v)
    {
        // <----------- Using Hashing ---------------->
        // vector <int> ls;
        // map<int, int> mpp;
        // int n = v.size();
        // int mini = (int)(n/3) + 1;
        // for(int i=0; i< n; i++){
        //     mpp[v[i]]++;
        //     if(mpp[v[i]] == mini){
        //         ls.push_back(v[i]);
        //     }
        //     if(ls.size() == 2) break;
        // }
        // sort(ls.begin(), ls.end());
        // return ls;

        // <----------- OPTIMAL APPROACH -------------->
        int count1 = 0, count2 = 0;
        int n = v.size();
        int element1 = INT_MIN, element2 = INT_MIN;
        for (int i = 0; i < v.size(); i++)
        {
            if (count1 == 0 and element2 != v[i])
            {
                count1 = 1;
                element1 = v[i];
            }
            else if (count2 == 0 and element1 != v[i])
            {
                count2 = 1;
                element2 = v[i];
            }
            else if (v[i] == element1)
                count1++;
            else if (v[i] == element2)
                count2++;
            else
            {
                count1--;
                count2--;
            }
        }
        vector<int> ls;
        count1 = 0;
        count2 = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (element1 == v[i])
                count1++;
            else if (element2 == v[i])
                count2++;
        }
        int mini = (int)(n / 3) + 1;
        if (count1 >= mini)
            ls.push_back(element1);
        if (count2 >= mini)
            ls.push_back(element2);

        sort(ls.begin(), ls.end());

        return ls;
    }
};