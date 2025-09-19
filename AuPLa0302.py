skaitlu_daudzums = int(input("Cik daudz veselus skaitļus vēlaties ievadīt?: "))

print("")
print("-" * 100)
print("")

if skaitlu_daudzums > 0:

    # Ievada pirmo skaitli
    skaitlis = int(input("Ievadi 1. skaitli: "))
    lielakais_skaitlis = skaitlis

    # Ievada pārējos skaitļus
    for i in range(1, skaitlu_daudzums):
        skaitlis = int(input(f"Ievadi {i + 1}. skaitli: "))

        if skaitlis > lielakais_skaitlis:
            lielakais_skaitlis = skaitlis

    print("")
    print("-" * 100)
    print("")
    print(f"Lielākais skaitlis: {lielakais_skaitlis}")

else:
    print("Ievadiet derīgu skaitļu daudzumu!")
