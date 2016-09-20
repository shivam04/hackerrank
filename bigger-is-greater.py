from itertools import permutations
t = int(raw_input())
for i in range(0,t):
    a = raw_input()
    b = a
    p = permutations(sorted(b))
    flag = 0
    f=0
    for pi in p:
        if ('').join(pi)== a and flag==0:
            flag=1
        elif flag == 1:
            if ('').join(pi)==a:
                print 'no answer'
                break
            else:
                print ('').join(pi)
                break
