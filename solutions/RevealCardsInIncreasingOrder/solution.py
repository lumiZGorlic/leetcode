class Solution:
    def deckRevealedIncreasing(self, deck: List[int]) -> List[int]:
        deck.sort()        
        def f(l):
            if not l: return []

            tmp = f(l[1:])
            return [l[0]] + tmp[-1:] + tmp[:-1]
            pass

        return f(deck)
        pass
