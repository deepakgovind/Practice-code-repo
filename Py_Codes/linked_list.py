class Node:
	def __init__(self, value):
		self.value = value
		self.next = None

class LinkedList:
	def __init__(self):
		self.root = None

	def append(self, value):
		if self.root:
			temp = self.root
			while temp.next != None:
				temp = temp.next
			temp.next = Node(value)
		else:
			self.root = Node(value)

	def delete_end(self):
		if self.root == None:
			print("No nodes to delete.")
		elif self.root and self.root.next != None:
			temp = self.root
			while(temp.next.next != None):
				temp = temp.next
			temp.next = None
		elif self.root.next == None:
			self.root = None
		

	def __repr__(self):
		if self.root:
			return_str = ""
			temp = self.root
			while temp != None:
				return_str += f"[{temp.value} -]-->"
				temp = temp.next
			return return_str
		else:
			return "Empty list!"


if __name__ == "__main__":
	ll = LinkedList()
	print(ll)
	ll.append(1)
	print(ll)
	ll.delete_end()
	print(ll)
	ll.delete_end()
	ll.append(1)
	ll.append(2)
	ll.append(3)
	ll.append(4)
	print(ll)
	ll.delete_end()
	print(ll)
