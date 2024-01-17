for t in range(int(input())):
    h,x,y1,y2,k = map(int,input().split())
    
    if(h%x==0):
        gun = h//x 
    else:
        gun = (h//x)+1 
    #print("gun = ",gun)
        
    if((h/y1) > k):
        rem = h-(y1*k)
        if(rem%y2==0):
            laser = k+(rem//y2)
        else:
            laser = k+(rem//y2)+1
        #print("if laser = ",laser)
            
        
    else:
        if(h%y1==0):
            laser=h//y1 
        else:
            laser = (h//y1) + 1
        #print("else laser = ",laser)
    
    if(gun<=laser):
        print(gun)
    else:
        print(laser)
    