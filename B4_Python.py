'''
---------------------------------------------------------------

Emils E. Magone, em25106
Izveidot programmu gan C++, gan Python.
Ievadot loģiski nepareizus datus, programmai jāizdod atbilstošs paziņojums.

B4. Noskaidrot, vai dotajā naturālajā skaitlī ir atrodami vienādi cipari.
Ja ir, izdrukāt tos un skaitu, cik reižu dotais cipars ir sastopams.

Programmas gala versija izstrādāta: 24.10.2025
---------------------------------------------------------------

                Testa plāns

        Ievade:      Paredzamais rezultāts:

         1111         Cipars 1 atkartojas 4 reizes
         1234         Skaitlim visi cipari ir atskirigi
         1122         Cipars 2 atkartojas 2 reizes
                      Cipars 1 atkartojas 2 reizes
         aaaa         Nav naturals sk.(>0)
          -1          Nav naturals sk.(>0)

---------------------------------------------------------------
'''


while True:

    while True:
        try:
            n = int(input("Ievadi naturāliu skaitli (>0): "))
            if n > 0:
                break
            else:
                print("Nav naturals sk.(>0)")
        except ValueError:
            print("Nav naturals sk.(>0)")

    kopija = n
    gatavie = 0
    atkartojas = False

    while n > 0:
        cipars = n % 10
        n //= 10

        kopija2=gatavie
        while kopija2 > 0 and (kopija2 % 10 != cipars):
            kopija2 //= 10
        if kopija2 > 0: 
            continue

        skaits = 0
        kopija2 = kopija

        while kopija2 > 0:
            if kopija2 % 10 == cipars:
                skaits+=1
            kopija2 //= 10

        if skaits > 1:
            print(f"Cipars {cipars} atkartojas {skaits} reizes")
            atkartojas = True

        gatavie = gatavie * 10 + cipars
    
    if not atkartojas:
        print("Skaitlim visi cipari ir atskirigi")



    turpinat = int(input("Vēlaties vēlreiz pamēģināt? (1/0): "))
    print("-" * 100)
    print()

    if turpinat != 1:
        break   

