t = int(input())
for test in range(t):
    n = int(input())
    sub = 1001
    ar = list(map(int, input().strip().split()[:n]))
    for first_loop in range(0, n-1):
        for second_loop in range(first_loop+1, n):
            if abs(ar[first_loop] - ar[second_loop]) < sub:
                sub = abs(ar[first_loop] - ar[second_loop])
    print(sub)