with open("square.in",'r') as f:
    fi = f.read().split("\n")
    x1,y1,x2,y2 = map(int,fi[0].split(" "))
    a1,b1,a2,b2 = map(int,fi[1].split(" "))

    smallx = min(x1,a1)
    bigx = max(x2,a2)

    smally = min(y1,b1)
    bigy = max(y2,b2)

    x_diff = bigx - smallx
    y_diff = bigy - smally

    with open("square.out",'w') as out:
        out.write(str(max(x_diff, y_diff)**2))
