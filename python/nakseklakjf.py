

s_num=int(input())
total=()

def camltbeAdded(num):
    for i in num:
        if int(i) % s_num == 0 or s_num % int(i) == 0:
            total+=tuple(int(i))
    return total


while True:
    print('1.Add\n2.Print\n0.exit')
    m=int(input())
    if m == 1:
        num=input().split()
        camltbeAdded(num)
    elif m == 2:
        print(camltbeAdded(num))
    else:
        break
        print('0')
