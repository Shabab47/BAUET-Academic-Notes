#include<bits/stdc++.h>
using namespace std;

vector<int> a;

void merge(vector<int> &a,int l, int r,int mid)
{
    int s1=mid-l+1;
    int s2=r-mid;
    int left[s1], right[s2];
    for(int i=0;i<s1;i++)left[i]=a[l+i];
    for(int i=0;i<s2;i++)right[i]=a[l+s1+i];
    int i=0,j=0,k=l;
    while(i<s1 && j<s2)
    {
        if(left[i]<=right[j])
        {
            a[k]=left[i];
            i++;
        }
        else
        {
            a[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<s1)
    {
        a[k]=left[i];
        i++;
        k++;
    }
    while(j<s2)
    {
        a[k]=right[j];
        j++;
        k++;
    }
}
void mergesort(vector<int> &a, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(a, l, mid);
        mergesort(a, mid + 1, r);
        merge(a, l, r, mid);
    }
}

int main()
{
    string s;
    cout<<"Enter the array values(Enter anything except number values to stop): ";
    while(1){
        cin>>s;
        if(s>="0"&&s<="9"){
            a.push_back(stoi(s));
        }
        else break;

    }
    int n = a.size();
    mergesort(a, 0, n - 1);
    for (int i = 0; i < n; i++)cout << a[i] << " ";
}
