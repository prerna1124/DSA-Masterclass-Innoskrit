import math

if __name__ == '__main__':
    
    b, isPrime = 7, True

    for i in range(2, int(math.sqrt(b)) + 1, 1):
        
        if b % i == 0:
            isPrime = False
            break
        
    print(isPrime)