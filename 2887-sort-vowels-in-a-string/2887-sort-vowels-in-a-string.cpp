class Solution {
public:
    string sortVowels(string s) {
        const unordered_set<char> vowels = {
            'a', 'e', 'i', 'o', 'u',
            'A', 'E', 'I', 'O', 'U',
        };

        map<char, int> vowel_count;
        for (auto& c : s) {
            if (vowels.count(c) != 0) vowel_count[c]++;
        }

        for (char& c : s) {
            if (vowels.count(c) != 0) {
                auto it = vowel_count.begin();
                c = it->first;
                if (--(it->second) == 0) vowel_count.erase(it);
            }
        }
        return s;
    }
};