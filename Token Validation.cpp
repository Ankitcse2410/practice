//w@3 --> inpToken-------
//					    |--> Input
//11:20 --> timeOfDay---
//Valid token --> Output
#include <bits/stdc++.h>
using namespace std;

void validateToken( string inpToken,  string timeOfDay){
    
    string s;
    string time;
    s = inpToken;
    time = timeOfDay;
    
    int total = (time[0] - '0') * 10 + (time[1] - '0');

    if(total < 12){
     bool flag1 = 65<=s[0] && s[0]<91 || 97 <=s[0] && s[0]<=122;
     bool flag2 = 48<=s[2] && s[2]<=57;
     bool flag3 = 32<=s[1] && s[1]<=47 || 58<=s[1] && s[1]<=64 || 91<=s[1]&& s[1]<=96 || 123<=s[1]&& s[1]<=126;

      if(flag1 && flag2 && flag3)
      cout<<"Valid token";
      else
      cout<<"Invalid token";
    } else {
        bool flag1 = 65<=s[2] && s[2]<91 || 97 <=s[2] && s[2]<=122;
        bool flag2 = 48<=s[0] && s[0]<=57;
        bool flag3 = 32<=s[1] && s[1]<=47 || 58<=s[1] && s[1]<=64 || 91<=s[1]&& s[1]<=96 || 123<=s[1]&& s[1]<=126;

      if(flag1 && flag2 && flag3)
      cout<<"Valid token";
      else
      cout<<"Invalid token";
    }

}

int main() {
	string inpToken;
	getline(cin, inpToken);
	
	string timeOfDay;
	getline(cin, timeOfDay);
	
	validateToken(inpToken, timeOfDay);
	return 0;
}