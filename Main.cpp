#include <iostream>
#include <fstream>
using namespace std;
struct wTree{
    bool isW=false;
    bool hNode[26]={false};
    wTree* btchs[26];
};
int main(){
    ifstream in("words.txt");
    wTree* wds=new wTree;
    string tmp;
    while (in>>tmp){
        wTree* nd=wds;
        for (int i=0;i<tmp.length();i++){
            if (!nd->hNode[tmp[i]-'a']){
                nd->hNode[tmp[i]-'a']=true;
            }
        }
    }
}
