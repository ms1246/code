def romanToInt(self, s: str) -> int:
    table = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}
    sum = 0
    for n in range(len(s)):
        current = table[s[n]]
        next = table[s[n + 1]] if n + 1 < len(s) else 0
        if current > next:
            sum += current
        else:
            sum -= current

    return sum


print(romanToInt(None, "III"))
