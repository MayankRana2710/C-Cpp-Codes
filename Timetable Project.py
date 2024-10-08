print('''
      1->MATHS3
      2->TC
      3->DS
      4->COA
      5->DSTL
      6->DS_LAB
      7->COA_LAB
      8->WW_LAB
      9->PYTHON
      10->MP_LAB
      11->VER
      12->APTI''')
day=int(input("Enter no. of working days in week: "))
per=int(input("Enter no. period in one day: "))
l=[]
submark={1:"MATHS3",2:"TC",3:"DS",4:"COA",5:"DSTL",6:"DS_LAB",
         7:"COA_LAB",8:"WW_LAB",9:"PYTHON",10:"MP_LAB",11:"VER",12:"APTI"}
subcode={"MATHS3":"BAS303","TC":"BAS301","DS":"BCS301","COA":"BCS302",
         "DSTL":"BCS303","DS_LAB":"BCS351","WW_LAB":"BCS353",
         "PYTHON":"BCC302","MP_LAB":"BCC351"}
sub={}
for i in range(day):
    col=[]
    for j in range(per):
        ele=int(input("Enter MARKING as per subject: "))
        col.append(submark[ele])
        sub[subcode[submark[ele]]]=0
    l.append(col)
for i in range(day):
    for j in range(per):
        k=l[i][j]
        sub[k]+=1
print(l)
print(sub)