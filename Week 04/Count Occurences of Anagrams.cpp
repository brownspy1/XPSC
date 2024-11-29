// Created by @brownspy1 on 2024-11-29 Time:17-55-32
#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define ll long long
#define all(x) x.begin(), x.end()
int search(string pat, string txt) {
	    int n = txt.size();
	    int x = pat.size();
	    int r = 0, l = 0;
	    int cnt = 0;
	    map<char,int> pt;
	    map<char,int> window;
	    for(auto i:pat) pt[i]++;
	    while(r < n){
	        window[txt[r]]++;
	        if(r-l+1 == x){
	            if(pt==window){
	                cnt++;
	            }
	            window[txt[l]]--;
	            if(window[txt[l]]){
	                window.erase(txt[l]);
	            }
                l++;
	        }
	        r++;
	    }
	    return cnt;
	}
