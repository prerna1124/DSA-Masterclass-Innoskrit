def catalan(n):
	
	catalan =[0]*(n)
	
	if n >= 1:
	    catalan[0] = 1
	    print(catalan[0], end = " ")
	    
	if n >= 2:
	    catalan[1] = 1
	    print(catalan[1], end = " ")

	for i in range(2, n):
		for j in range(i):
			catalan[i] += catalan[j]* catalan[i-j-1]
			
		print(catalan[i], end = " ")

if __name__ == '__main__':
    n = 10
    catalan(n)