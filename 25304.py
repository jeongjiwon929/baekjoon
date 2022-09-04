p = int(input())
c = int(input())
a = []
t = 0
for x in range(c) :
  a.append(map(int, input().split()))
for x, y in a :
  t += x * y
if p == t :
  print('Yes')
else :
  print('No')
