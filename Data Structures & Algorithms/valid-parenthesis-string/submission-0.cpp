class Solution {
public:
    bool checkValidString(string s) {
      int low=0;
      int high=0;

      for(char k:s)
      {
        if(k=='(')
        {
            low++;
            high++;

        }
        else if(k==')')
        {
            low--;
            high--;
        }
        else 
        {
            low--;
            high++;
        }
        if(high<0)
        return false;

        low=max(0,low);
      }  

      return low==0;
    }
};
