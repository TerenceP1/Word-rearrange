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
    cout<<"creating binary search tree...\nappending words to binary search tree...\nThis may take some time\n";
    while (in>>tmp){
        wTree* nd=wds;
        for (int i=0;i<tmp.length();i++){
            if (!nd->hNode[tmp[i]-'a']){
                nd->hNode[tmp[i]-'a']=true;
                nd->btchs[tmp[i]-'a']=new wTree;
            }
            nd=btchs[tmp[i]-'a'];
        }
        nd->isW=true;
    }
    cout<<"binary search tree creation completed!\n";
    while (true){
        cout<<"type a sentance: ";
        cin.ignore();
        string st;
        getline(cin,st,'\n');
    }
}
