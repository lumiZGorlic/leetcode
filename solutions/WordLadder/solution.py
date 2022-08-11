class Solution:
    def ladderLength(self, source: str, target: str, words: List[str]) -> int:
        alphabet = 'abcdefghijklmnopqrstuvwxyz'
        wordset = set(words)
        q = [[source, 1]]
        seen = set([source])

        while q:
            word, depth = q.pop(0)
            if word == target: return depth
            for i in range(len(word)):
                for c in alphabet:
                    word2 = list(word)
                    word2[i] = c
                    word2 = ''.join(word2)
                    if word2 in wordset and word2 not in seen:
                        q.append([word2, depth+1])
                        seen.add(word2)

        return 0
        pass

# below 2 solutions in pseudo code   
'''function shortestWordEditPath(source, target, words):
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    wordset = new HashSet(words)
    queue = Queue()
    queue.add((source, 0))
    seen = new HashSet([source])

    while queue:
        word, depth = queue.popfront()
        if word == target: return depth
        for i from 0 to word.length:
            # First Strategy:
            # for word2 in words:
            #     if word2.length == word.length:
            #         diff = 0
            #         for j from 0 to word.length:
            #             if word[j] != word2[j]:
            #                 diff += 1
            #                 if diff == 2: break
            #         if diff == 1 and word2 not in seen:
            #             queue.append((word2, depth+1))
            #             seen.add(word2)

            # Second Strategy:
            for c in alphabet:
                word2 = word.clone()
                word2[i] = c
                if word2 in wordset and word2 not in seen:
                    queue.append((word2, depth+1))
                    seen.add(word2)
    return -1
'''
