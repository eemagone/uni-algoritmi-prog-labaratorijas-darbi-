while True:
    rinda = input("Ievadi teksta rindinu (<80 simboliem): ")

    if len(rinda) >= 80:
        print("Kļūda: teksts ir 80 vai vairāk simboli. Lūdzu, ievadi mazāk!\n")
        continue

    simb = input("Ievadiet kuru simbolu vēlaties atrast: ")

    if len(simb) != 1:
        print("Lūdzu ievadi tieši vienu simbolu!\n")
        continue

    # Tekstu pārvēršam par sarakstu, līdzīgi kā C++ masīvs
    masivs = list(rinda)

    reizes = 0
    for i in range(len(masivs)):
        if masivs[i] == simb:
            reizes += 1

    print(f"Simbols: '{simb}' ir sastopams {reizes} reizes.\n")

    turpinat = input("Vai turpināt (1) vai beigt (0)?: ")
    print()

    if turpinat != '1':
        break
