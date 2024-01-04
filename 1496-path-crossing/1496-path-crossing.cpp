class Solution {
public:
    bool isPathCrossing(string path) {
       int x=0;
       int y=0;
       int n=path.size();
       set<string>visited;
       visited.insert("0,0");
       for(int i=0;i<n;i++)
       {
           if(path[i]=='N') y++;
           else if(path[i]=='S')y--;
           else if(path[i]=='E')x++;
           else if(path[i]=='W')x--;
           string res=to_string(x)+","+to_string(y);
           if(visited.find(res)!=visited.end())
           {
               return true;
           }
           visited.insert(res);
       }
       return false;
    }
};