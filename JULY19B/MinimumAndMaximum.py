t=int(input())
for i in range(t):
    n=int(input())
    k=int(input())
    rem=k%n
    m=min(rem,n-rem)
    if rem==n-rem:
        print(2*rem-1)
    else:
        print(2*m)
        
