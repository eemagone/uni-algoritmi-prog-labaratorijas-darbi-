def skaita_ciparus(skaitlis, cipars):
    """
    Funkcija nosaka, cik reizes dots cipars parādās skaitļa pierakstā.
    """
    return str(skaitlis).count(str(cipars))


def galvena_programma():
    while True:
        try:
            skaitlis = int(input("Ievadi naturālu skaitli: "))
            if skaitlis <= 0:
                print("Lūdzu, ievadi pozitīvu, naturālu skaitli.")
                continue

            cipars = input("Ievadi vienu ciparu (0-9): ")
            if not (cipars.isdigit() and len(cipars) == 1):
                print("Lūdzu, ievadi tikai vienu ciparu no 0 līdz 9.")
                continue

            rezultats = skaita_ciparus(skaitlis, cipars)
            print(f"Cipars {cipars} skaitlī {skaitlis} parādās {rezultats} reizes.")

            # Vai turpināt?
            turpinat = input("Vai vēlies turpināt? (j/n): ").lower()
            if turpinat != 'j':
                print("Programma beidzas.")
                break

        except ValueError:
            print("Kļūda: Lūdzu, ievadi korektus datus.")


# Programmas palaišana
galvena_programma()
