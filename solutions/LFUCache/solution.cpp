// https://leetcode.com/problems/lfu-cache/discuss/937737/C%2B%2B%3A-O(1)-time-complexity-with-algorithm

//Just for better readability
using Key_t = int;
using Count_t = int;

struct Node
{
    int value;
    list<Key_t>::iterator itr;
};

class LFUCache
{
    unordered_map<Key_t, Node> m_values;
    unordered_map<Key_t, Count_t> m_counts;
    unordered_map<Count_t, list<Key_t>> m_countKeyMap;
    int m_lowestFrequency;
    int m_maxCapacity;

public:
    LFUCache(int capacity)
    {
        m_maxCapacity = capacity;
        m_lowestFrequency = 0;
    }

    int get(int key)
    {
        if (m_values.find(key) == m_values.end() || m_maxCapacity <= 0)
        {
            return -1;
        }
        //update frequency, & return value
        put(key, m_values[key].value);
        return m_values[key].value;
    }

    void put(int key, int value)
    {
        if (m_maxCapacity <= 0)
        {
            return;
        }

        //If key is not present and capacity has exceeded,
        //then remove the key entry with least frequency
        //else just make the new key entry
        if (m_values.find(key) == m_values.end())
        {
            if (m_values.size() >= m_maxCapacity){
                auto keyToRemove = m_countKeyMap[m_lowestFrequency].back();
                m_countKeyMap[m_lowestFrequency].pop_back();
                m_values.erase(keyToRemove);
                m_counts.erase(keyToRemove);
            }

            m_counts[key] = 1;

            m_countKeyMap[1].push_front(key);
            auto itr = m_countKeyMap[1].begin();

            m_values[key].value = value;
            m_values[key].itr = itr;

            m_lowestFrequency = 1;
        }
        else
        {
            auto oldFreq = m_counts[key];
            auto newFreq = oldFreq+1;

            m_counts[key] = newFreq;

            m_countKeyMap[oldFreq].erase(m_values[key].itr);
            m_countKeyMap[newFreq].push_front(key);
            auto itr = m_countKeyMap[newFreq].begin();

            m_values[key].value = value;
            m_values[key].itr = itr;

            if (oldFreq == m_lowestFrequency && !m_countKeyMap[oldFreq].size()){
                m_lowestFrequency = newFreq;
            }
        }
    }
};
