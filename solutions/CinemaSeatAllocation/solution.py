class Solution:
    def maxNumberOfFamilies(self, n: int, reservedSeats: List[List[int]]) -> int:
        seats = collections.defaultdict(int) 
        res = 0

        for row, col in reservedSeats:
            seats[row] = seats[row] | (1 << (col-1))

        for reserved in seats.values():
            curr = 0
            curr += (reserved & int('0111100000', 2)) == 0
            curr += (reserved & int('0000011110', 2)) == 0
            curr += (reserved & int('0001111000', 2)) == 0 and curr == 0

            res += curr    

        return res + 2 * (n - len(seats))

        ''' below also fine
        booked = defaultdict(list)
        for r,s in rs: booked[r].append(s)

        ret = 0

        for r in booked.keys():
            if 2 not in booked[r] and 3 not in booked[r] and 4 not in booked[r] and 5 not in booked[r]:
                if 6 not in booked[r] and 7 not in booked[r] and 8 not in booked[r] and 9 not in booked[r]:
                    ret += 2
                else:
                    ret += 1
            elif 6 not in booked[r] and 7 not in booked[r] and 8 not in booked[r] and 9 not in booked[r]:
                ret += 1
            elif 4 not in booked[r] and 5 not in booked[r] and 6 not in booked[r] and 7 not in booked[r]:
                ret += 1

        ret += 2 * (n - len(booked))'''
