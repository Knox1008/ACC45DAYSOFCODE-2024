class Solution {
public:
    int romanToInt(string s) {
        map<char,int>rom;
        rom.insert({'I',1});
        rom.insert({'V',5});
        rom.insert({'X',10});
        rom.insert({'L',50});
        rom.insert({'C',100});
        rom.insert({'D',500});
        rom.insert({'M',1000});

        int num=0;
        for(int i=0;i<s.size();i++)
        {
            if(i==s.size()-1)
            {
                num+=rom[s[i]];
            }
            else if(rom[s[i]]>=rom[s[i+1]])
            {
                num+=rom[s[i]];
            }
            else
            {
                num-=rom[s[i]];
            }
        }
        return num;
    }
};