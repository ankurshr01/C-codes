#include<stdio.h>
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long int
#define read(a) long long int a; cin>>a;
#define readstr(s) string s; cin>>s;
#define readarr(a,l) long long int a[l]={0}; for(ll i=0;i<l;i++) cin>>a[i];
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define ff first
#define ss second
#define readmtrx(i,j,a,b) ll arr[a][b]={0};for(ll i=0;i<a;i++)for(ll j=0;j<b;j++) cin>>arr[i][j];
#define v(pi) vector<ll>pi
#define vp(pi) vector<pair<ll,ll>>pi
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define pb(p) push_back(p)
#define mp make_pair
#include <cmath>
#include <map>
#define mi(lol) map<ll,ll>lol



void swapping(ll* a1, ll* a2)
{
    int t = *a1;
    *a1 = *a2;
    *a2 = t;
}
ll partition (ll arr[], ll low, ll high)
{
    ll pivot = arr[high];
    ll i = (low - 1);

    for (ll j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swapping(&arr[i], &arr[j]);
        }
    }
    swapping(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(ll arr[], ll low, ll high)
{
    if (low < high)
    {
        ll pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void printArray(ll arr[], int a)
{
  loop(i,0,a){
    cout<<arr[i]<<" ";
  }
}
int main()
{
    /// Enter size of the array
    read(a);
    //// Enter array of the size a
    readarr(arr,a);
    /// Initializing the quickSort
    quickSort(arr, 0, a-1);
    cout<<"Array after sorrting is : "<<endl;
    printArray(arr, a);
    return 0;
}
