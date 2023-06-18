T = int(input('')) 

Result = []
Floor = []
Apt = []

for i in range(T):  #테스트 케이스
    Apt.clear()
    Floor.clear() 
    K=int(input('')) 
    N=int(input(''))
    
    for a in range(1, 15): #0층 1호부터 14호까지 
        Floor.append(a) 
    Apt.append(list(Floor))
    
    for b in range(1, K+1): #1~K층 1호부터 14호까지 만들기
        sum = 0
        Floor.clear()
        for c in range(14):
              sum = sum + Apt[b-1][c]
              Floor.append(sum)
        Apt.append(list(Floor))
    
    Result.append(int(Apt[K][N-1]))
    
for i in range(len(Result)):
    print(Result[i])