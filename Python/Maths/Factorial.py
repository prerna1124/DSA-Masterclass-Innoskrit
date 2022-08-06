if __name__ == '__main__':
    n = 5
    fact = 1
    
    for i in range(n, 0, -1) :
        fact *= i
        
    print(fact)