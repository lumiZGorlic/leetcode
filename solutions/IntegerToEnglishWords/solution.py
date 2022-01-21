mp1 = {0: 'Zero', 1:'One', 2:'Two', 3:'Three', 4:'Four', 5:'Five', 6:'Six', 7:'Seven', 8:'Eight', 9:'Nine', 10: 'Ten', 11:'Eleven', 12:'Twelve', 13:'Thirteen', 14:'Fourteen', 15:'Fifteen', 16:'Sixteen', 17:'Seventeen', 18:'Eighteen', 19:'Nineteen'}
mp2 = {2: 'Twenty', 3:'Thirty', 4:'Forty', 5:'Fifty', 6:'Sixty', 7:'Seventy', 8:'Eighty', 9:'Ninety'}

class Solution:
    def numberToWords2(self, num: int) -> str:
        if not num:
            return ""
        elif num < 20:
            return mp1[num]
        elif num < 100:
            return mp2[num // 10] + " " + self.numberToWords2(num % 10)
        elif num < 1000:
            return self.numberToWords2(num // 100).rstrip() + " Hundred " + self.numberToWords2(num % 100)
        elif num < 1000000:
            return self.numberToWords2(num // 1000).rstrip() + " Thousand " + self.numberToWords2(num % 1000)
        elif num < 1000000000:
            return self.numberToWords2(num // 1000000).rstrip() + " Million " + self.numberToWords2(num % 1000000)
        else:
            return self.numberToWords2(num // 1000000000).rstrip() + " Billion " + self.numberToWords2(num % 1000000000)

    def numberToWords(self, num: int) -> str:
        if not num: return "Zero"
        return self.numberToWords2(num).rstrip()
