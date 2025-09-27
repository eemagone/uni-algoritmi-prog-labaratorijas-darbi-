while True:


    while True:

        n = int(input("Cik skaitlus velaties ievaditi: "))

        try:
            num = int(n)

            if num < 1:
                print("Ievadiet vairāk par 0 skaitļiem!\n")
            else:
                break
        except ValueError:
            print("Ievadiet veselu skaitli!\n")


    max_virk = 1
    virk_gar = 1

    ieprieksejais_sk = int(input(f"Ievadiet {n} veselus skaitļus:"))

    for i in range(1, n):
        sk = int(input())

        if sk > ieprieksejais_sk:
            virk_gar += 1
        else:
            if virk_gar > max_virk:
                max_virk = virk_gar

            virk_gar = 1

        ieprieksejais_sk = sk

    if virk_gar > max_virk:
        max_virk = virk_gar

    print()
    print(f"Garākā pieaugošā virkne satur {max_virk} skaitļus...")
    print()
    print("-" * 100)

    if int(input("Vēlreiz? (1/0:) ")) != 1:
        break
    