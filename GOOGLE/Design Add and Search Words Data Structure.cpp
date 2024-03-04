class WordDictionary {
public:
struct TrieNode {
    struct TrieNode *children[26];

    // isLeaf is true if the node represents
    // end of a word
    bool isLeaf;

    TrieNode()
    {
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }

        isLeaf=false;
    }
};
    
    TrieNode *root=new TrieNode();
    WordDictionary() {
        
    }
    
    void addWord(string key) {
            TrieNode *temp=root;
            for(int i=0;i<key.size();i++)
            {
                if(temp->children[key[i]-'a']==NULL) temp->children[key[i]-'a']=new TrieNode();
                
                temp=temp->children[key[i]-'a'];
                
                if(i==key.size()-1) temp->isLeaf=true;
            }
    }
    
    bool searchhelper(int index,TrieNode *root,string key)
    {
        if(index==key.size()) return root->isLeaf;

        if(key[index]=='.')
        {
            for(int j=0;j<26;j++)
            {
                if(root->children[j]!=NULL && searchhelper(index+1,root->children[j],key)) return true;
            }

            return false;
        }

        else if(root->children[key[index]-'a']==NULL) return false;

        return searchhelper(index+1,root->children[key[index]-'a'],key);
    }
    bool search(string key) {
        return searchhelper(0,root,key); 
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
