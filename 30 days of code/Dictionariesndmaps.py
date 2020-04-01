# Problem Link : https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem

dic={}
n=int(input().strip())
for i in range(0,n):
    name, num=input().strip().split(' ')
    dic[name]=num
for i in range(0,n):
    try:    
        y=input()
        if y in dic.keys():
            print(y+'='+dic[y])
        else:
            print('Not found')
    except EOFError:
        break
