inp = int(input())
di = dict()
c = 0

for loop in range(inp):
    in_st = input()
    if in_st in di:
        print('{}{}'.format(in_st, di[in_st]))
    else:
        print('OK')
    di[in_st] = di.get(in_st, 0) + 1
