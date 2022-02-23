class Solution:
    def maximumEvenSplit(self, finalSum: int) -> List[int]:
        arr = []
        if finalSum % 2 == 0:
            numOfTwosLeft, numOfTwosToTake = finalSum // 2, 1
            while numOfTwosToTake <= numOfTwosLeft:
                arr.append(2 * numOfTwosToTake)
                numOfTwosLeft -= numOfTwosToTake
                numOfTwosToTake += 1
            s = sum(arr)
            arr[-1] += finalSum - s
        return arr
