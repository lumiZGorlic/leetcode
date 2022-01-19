class Solution {
public:
    int uf_find(vector<int> &uf, int i) {
        return uf[i] == -1 || uf[i] == i ? i : uf_find(uf, uf[i]);
    }

    bool equationsPossible(vector<string>& equations) {
        vector<int> uf('z' + 1, -1);
        for (auto s : equations)
            if (s[1] == '=') uf[uf_find(uf, s[0])] = uf_find(uf, s[3]);
        for (auto s : equations)
            if (s[1] == '!' && uf_find(uf, s[0]) == uf_find(uf, s[3])) return false;
        return true;
    }
};

/*class Solution {
public:
    void dfs(int n, int c, vector<unordered_set<int>>& graph, vector<int>& node2Compo, unordered_set<int>& done){
        node2Compo[n] = c;
        for (int nb: graph[n]){
            if(done.count(nb)) continue;
            done.insert(nb);
            dfs(nb, c, graph, node2Compo, done);
        }
    }

    bool equationsPossible(vector<string>& eqs) {
        vector<unordered_set<int>> graph(26, unordered_set<int>());
        
        for (const auto& e: eqs){
            if (e[1] == '='){
                graph[ 'z'-e[0] ].insert( 'z'-e[3] );
                graph[ 'z'-e[3] ].insert( 'z'-e[0] );
            }
        }

        vector<int> node2Compo(26, -1);
        unordered_set<int> done;
        int compo=0;

        for (int i=0; i<26; i++){
            if(done.count(i)) continue;
            compo++;
            done.insert(i);
            node2Compo[i] = compo;
            dfs(i, compo, graph, node2Compo, done);
        }

        for (const auto& e: eqs){
            if (e[1] == '!' && node2Compo['z'-e[0]] == node2Compo['z'-e[3]])
                return false;
        }

        return true;
    }
};*/
