#  node -  [key   value  counter]
Key, Value, Counter = 0, 1, 2 # wanted to have something like enums, these globals are probably not good style

class LFUCache:
    # using 'buckets' i.e. if element added, it goes to the first
    # bucket, then when accessed, it moves to the next one etc
    def __init__(self, capacity: int):
        self.maxCapacity = capacity
        self.buckets = [[]]
        self.key2Node = {}

    def fwd(self, node):
        # move node to the next bucket
        currBucket = self.buckets[node[Counter]]
        # first need to find node in its bucket and remove it
        for i in range(len(currBucket)):
            if currBucket[i] is node:
                del currBucket[i] # need to do it this way so node actually exists cos we're just moving it
                break

        node[Counter] += 1
        if len(self.buckets) <= node[Counter]: # do we need to add another bucket
            self.buckets.append([])
        self.buckets[node[Counter]].append(node)

    def evict(self):
        for bucket in self.buckets:
            if bucket:
                del self.key2Node[bucket[0][Key]]
                bucket.pop(0)
                break

    def get(self, key: int) -> int:
        if key in self.key2Node:
            self.fwd(self.key2Node[key])
            return self.key2Node[key][Value]
        return -1

    def put(self, key: int, value: int) -> None:
        if not self.maxCapacity: return

        if self.get(key) != -1:
            self.key2Node[key][Value] = value
        else:
            if len(self.key2Node) >= self.maxCapacity: self.evict()
            #      key   value  counter
            node = [key, value, 0]
            self.key2Node[key] = node
            self.buckets[0].append(node)

# Your LFUCache object will be instantiated and called as such:
# obj = LFUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)
