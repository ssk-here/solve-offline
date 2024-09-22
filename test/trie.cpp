
/**
* @file trie.cpp
* @author Srikanth S
* @date [Current Date]
* @see 
* @brief   
* Build using .\build.bat test trie
*/
#include <allheaders.h>
using namespace std;
class Trie{
    public:
    Trie* children[26];
    bool isEndOfWord;
    Trie(){
        isEndOfWord = false;
        for(int i=0;i<26;i++){
            children[i] = NULL;
        }
    }
    void insert(string &word){
        Trie* node = this;
        for(char &c:word){
            if(node->children[c-'a'] == NULL)
                node->children[c-'a'] = new Trie();
            node = node->children[c-'a'];
        }
        node->isEndOfWord = true;
    }
    bool search(string &word){
        Trie* node=this;
        for(char&c:word){
            if(node->children[c-'a'] == NULL)
                return false;
            node = node->children[c-'a'];
        }
        return node->isEndOfWord;
    }
    vector<string> searchprefix(const string &prefix){
        Trie* node = this;
        vector<string> res={};
        for(auto &c:prefix){
            if(node->children[c-'a'] == NULL)
                return res;
            node = node->children[c-'a'];
        }
        res = all_children(node);
        for(string &s:res)
            s = prefix+s;
        return res;
    }
    void calc(Trie*node,string &s,vector<string> &res){
        if(node->isEndOfWord){
            res.push_back(s);
        }
        for(int i=0;i<26;i++){
            if(node->children[i]){
                s.push_back('a' + i);
                calc(node->children[i],s,res);
                s.pop_back();
            }
        }
    }
    vector<string> all_children(Trie*node){
        vector<string> res={};
        string s="";
        calc(node,s,res);
        return res;
    }
};


int main(int argc, char* argv[]) {

    //Common().parseArguments(argc,argv);

    // Test(argv[1], argv[2]);
    vector<string> words = { "a" ,"c",
        "ac", "acoustic", "acquire", "action", "active", "actor", "actual", "acute", "academy", "accent",
        "abandon", "ability", "able", "about", "above", "absent", "absolute", "abstract", "abuse", "academy"
    };

    Trie trie;
    for (string &word : words) {
        trie.insert(word);
    }

    vector<string> ac_words = trie.searchprefix("ac");
    vector<string> ab_words = trie.searchprefix("ab");

    cout << "Words starting with 'ac':" << endl;
    for (string &word : ac_words) {
        cout << word << endl;
    }

    cout << "Words starting with 'ab':" << endl;
    for (string &word : ab_words) {
        cout << word << endl;
    }

    return 0;
}
    