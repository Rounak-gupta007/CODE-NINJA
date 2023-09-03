def DiagCalc(L):
  L_sum=0
  R_sum=0
  m=L[::-1]
  for i in range(len(L)):
    for y in range(len(L)):
      if i==y:
        L_sum+=L[i][y]
        R_sum+=m[i][y] 
  print(L_sum)  
  print(R_sum,end="")  
                  