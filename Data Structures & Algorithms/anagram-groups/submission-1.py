class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # mp : Dict[str, List[str]] = {}
        mp = defaultdict(list)
        for it in strs:
            key = it
            sorted_key = "".join(sorted(key))
            # mp.setdefault(sorted_key, []).append(it)
            mp[sorted_key].append(it)
        result : List[List[str]] = []
        for x in mp:
            result.append(mp[x])

        return result