class Node:
    def __init__(self, is_end = False):
        self.is_end = is_end
        self.children = {}
        
class Trie:

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.data = Node('') 
        

    def insert(self, word: str) -> None:
        """
        Inserts a word into the trie.
        """
        curr = self.data
        i = 0
        while i<len(word):
            if word[i] not in curr.children:
                curr.children[word[i]] = Node()
            curr = curr.children[word[i]]
            i+=1
        curr.is_end = True
        

    def search(self, word: str) -> bool:
        """
        Returns if the word is in the trie.
        """
        curr = self.data
        i = 0
        while i<len(word):
            if word[i] not in curr.children:
                return False
            curr = curr.children[word[i]]
            i += 1
        return curr.is_end
        

    def startsWith(self, prefix: str) -> bool:
        """
        Returns if there is any word in the trie that starts with the given prefix.
        """
        curr = self.data
        i = 0
        while i<len(prefix):
            if prefix[i] not in curr.children:
                return False
            curr = curr.children[prefix[i]]
            i += 1
        return True
        


# Your Trie object will be instantiated and called as such:
# obj = Trie()
# obj.insert(word)
# param_2 = obj.search(word)
# param_3 = obj.startsWith(prefix)
