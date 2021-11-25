
string candyCrush(string s){
    // dummy char to handle some corner cases e.g. "aabbccddeeedcba"
    s += '#'; 
    vector<pair<char, int>> stack;

    int cnt = 0;
    char last = ' ';

    for (auto c: s){
        if (last != c){
            if (cnt){
                if (cnt < 3){
                    if (!stack.empty() && stack[stack.size()-1].first == last){
                        int total = cnt + stack[stack.size()-1].second;
                        if (total >= 3) stack.pop_back();
                        else stack[stack.size()-1].second = total;
                    }
                    else {
                        stack.push_back({last, cnt});
                    }
                }
            }

            last = c;
            cnt = 1;
        }
        else {
            cnt++;
        }
    }

    string ret;

    for (const auto& el: stack){
        ret += el.first;
        if (el.second == 2) ret += el.first;
    }

    return ret;
}

int main(){
    cout << candyCrush("aaabbbc") << endl;
    cout << candyCrush("aabbbacd") << endl;
    cout << candyCrush("aabbccddeeedcba") << endl;
    cout << candyCrush("aaabbbcccd") << endl;
    cout << candyCrush("") << endl;
    cout << candyCrush("zzzzzzzzzzz") << endl;
    cout << candyCrush("zzzzzxxxzzzzzz") << endl;
    cout << candyCrush("zzzzzxxzzzzzz") << endl;

    return 0;
}
