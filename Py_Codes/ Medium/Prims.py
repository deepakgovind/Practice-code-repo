import random, operator

# get number of vertices, edges and value of edges from user
v=int(input("Enter number of nodes: "))
edges={}

e=int(input("Enter number of edges: "))
for i in range(e):
  a,b,c=[int(s) for s in input("Enter 2 connected vertices and weight of edge: ").split()]
  edges[(a,b)]=c
  edges[(b,a)]=c

# sort all edges in ascending order or weights
edges = sorted(edges.items(),key=operator.itemgetter(1))

t={}
vis=[]

def getVertex():
  # get next smallest edge that includes one visited and one unvisited vertex 
  for key,val in edges:
    a,b=key
    if a in vis and b not in vis:
      return a,b,val
   
# initailze from a random vertex
vis.append(random.randint(1,v+1))

# continue selecting minimum weight edges until all vertices are visited
while len(vis)<v:
  a,b,c=getVertex()
  vis.append(b)
  t[a,b]=c

print('t: ',t)
print('vis: ',vis)

# example of input
'''
5
7
1 2 2 
1 4 6
2 3 3
2 4 8
2 5 5
3 5 7
4 5 9
''' 
