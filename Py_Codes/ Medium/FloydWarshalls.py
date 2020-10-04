# Floyd-Warshalls algo for all pairs shortest path

# input for number of nodes
v=int(input("Enter number of nodes: "))

# all pairs path matrix
a=[[float('inf') for i in range(v)] for j in range(v)]

# set path from i to i vertex as zero
for i in range(v):
  a[i][i]=0

# input for number of edges and each edge
for i in range(int(input("Enter number of edges: "))):
  x,y,z=[int(s) for s in input("Enter 2 connected vertices and weight of edge:").split()]
  a[x-1][y-1]=z

a1=a[:]

for i in range(v):
  for j in range(v):
    for k in range(v):
      a1[j][k]=min(a[j][k],a[j][i]+a[i][k])
  a=a1

for i in a:
  print(i)

# example for input graph
'''
4
4
1 2 5
1 4 10
2 3 3 
3 4 1
'''
