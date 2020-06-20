#include <string>
#include <vector>
#include<queue>
#include<iostream>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int>repro;
    
    for(int i = 0; i<progresses.size(); i++)
    {
        int num = 100-progresses[i];
        int nanum = num / speeds[i];
        int namuji = num % speeds[i];
        if(namuji != 0) nanum++;
        repro.push_back(nanum);
    }
    
    int standard = repro[0];
    int Count = 1;  
    for(int i = 1; i<repro.size(); i++)
    {
        if(standard >= repro[i])Count++;
        else
        {
            answer.push_back(Count);
            Count = 1;
            standard = repro[i];
            if( i == repro.size()-1) answer.push_back(Count);
        }
    }
    
    return answer;
}
