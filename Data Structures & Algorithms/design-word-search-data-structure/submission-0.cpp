class TrieNode {
    public:
    TrieNode* children[26];
    bool endOfWord;


    TrieNode() {
        for(int i=0;i<26;i++)
        {
            children[i]=nullptr;
        }
        endOfWord=false;
    }
};




class WordDictionary {
private:
TrieNode* root;

bool dfs(string& word,int index,TrieNode* node)
{
    if(index==word.size())
    {
        return node->endOfWord;
    }
    char c = word[index];

    if(c=='.')
    {
        for(int i =0;i<26;i++)
        {
            if(node->children[i]!=nullptr)
            {
                if(dfs(word,index+1,node->children[i]))
                {
                    return true;
                }
            }
        

        }
        return false;
    }

    int i = c-'a';

    if(node->children[i]==nullptr)
    return false;

    return dfs(word,index+1,node->children[i]);
}
public:
    WordDictionary() {
        root= new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode* curr = root;

        for(char c:word){
            int i = c-'a';

            if(curr->children[i]==nullptr)
            {
                curr->children[i] = new TrieNode();
            }
            curr=curr->children[i];
        }
        curr->endOfWord=true;
    }
    
    bool search(string word) {
        return dfs(word,0,root);
    }
};
