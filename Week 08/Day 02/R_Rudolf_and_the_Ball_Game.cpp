/* title: Week 7 - R_Rudolf_and_the_Ball_Game.cpp */
/* created: 2024-05-12 01:55:19 */
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;

    while (t--) {
        ll player, match, startPlayer;
        cin >> player >> match >> startPlayer;

        vector<ll> v(player+1, 0);
        v[startPlayer-1] = 1;
        while (match--) {
            ll nowPlayer;
            char played;
            cin >> nowPlayer >> played;

            if(played == '?') {
                vector<ll> newPosition;
                for(ll i=0; i<player; i++) {
                    if(v[i]) {
                        newPosition.push_back(i);
                        v[i] = 0;
                    }
                }
                for(ll i : newPosition) {
                    v[ (i+nowPlayer) % player ] = 1;
                    v[ ((i-nowPlayer) % player + player) % player ] = 1;
                } 
            } else if (played == '0') {
                vector<ll> newPosition;
                for(ll i=0; i<player; i++) {
                    if(v[i]) {
                        newPosition.push_back(i);
                        v[i] = 0;
                    }
                }
                for(ll i : newPosition) {
                    v[ (i+nowPlayer) % player ] = 1;
                } 
            } else if (played == '1') {
                vector<ll> newPosition;
                for(ll i=0; i<player; i++) {
                    if(v[i]) {
                        newPosition.push_back(i);
                        v[i] = 0;
                    }
                }
                for(ll i : newPosition) {
                    v[ ((i-nowPlayer) % player + player) % player ] = 1;
                } 
            }
        }

        ll cntPlayer = 0;
        for(ll i=0; i<player; i++) {
            if(v[i]) cntPlayer += v[i];
        }
        cout << cntPlayer << endl;
        
        for(ll i=0; i<player; i++) {
            if(v[i]) cout << i+1 << " ";
        }
        cout << endl;
    }    
    return 0;
}