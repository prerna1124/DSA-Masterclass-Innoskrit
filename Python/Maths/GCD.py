if __name__ == '__main__':
    
    a, b = 169, 6

    while a != b :

        if a > b :
            a -= b
        else :
            b -= a

    print(a)