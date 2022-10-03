def solution(input1,input2):
    class Graph:
        def __init__(self):
            from collections import defaultdict
            self.graph = defaultdict(list)
    
        def addEdge(self,u,v):
            self.graph[u].append(v)
        
        def bfs(self,s,vis):
            q=[]
            vis[s]=True
            q.append(s)
            dis=0
            d={}
            d[s]=0
            f=[]
            while(len(q)!=0):
                s=q.pop()
                # print(s)
                for i in self.graph[s]:
                    if(not(vis[i])):
                        q.append(i)
                        d.update({i:d[s]+1})
                        
            
            return d
    a=[]
    g = Graph()
    a=[]
    for i in range(len(input2)):
        a.append(input2[i][0])
        g.addEdge(input2[i][0],input2[i][1])

    # print(g.graph)
    vis=[False for i in range(input1)]
    print(g.graph)
    ans=g.bfs(0,vis)
    print(ans)
    ans.update({0:float("inf")})
    for i in g.graph:
        print(i)
    for i in ans:
        if i in a:
            ans.update({i:float("inf")})
    print(ans)
    mi=min(ans.values())
    count=0
    
    for i in ans:
        if(ans[i]==mi):
            count+=i
    print(count)


input1=4
input2=[[0,1],[0,2],[2,3]]
solution(input1,input2)