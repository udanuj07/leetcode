class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        res = [first]
        for x in encoded:
            first ^= x
            res.append(first)
        return res