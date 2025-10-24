def getNatural():
    while True:
        try:
            n = int(input("Ievadiet naturālu skaitli: "))
            if n > 0:
                break
            else:
                print("Ievadiet naturālu skaitli! (>0)\n")
        except ValueError:
            print("Ievadiet naturālu skaitli! (>0)\n")

    return n

while True:

    x = getNatural()

    turpinat = int(input("Velreiz? (1/0)"))
    if turpinat != 1:
        break
