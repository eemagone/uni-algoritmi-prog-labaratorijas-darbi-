while True:

    c = int(input("Ievadi naturalu skaitli: "))
    max_c = 0

    while c > 0:
        jauns = int(c % 10)
        if jauns > max_c:
            max_c = jauns
        c /= 10
        
    print(f"Lielākais cipars: {max_c}")   


    if int(input("Velreiz? (1/0): ")) != 1:
        break