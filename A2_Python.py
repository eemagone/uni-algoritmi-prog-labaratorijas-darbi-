'''
---------------------------------------------------------------

Emils E. Magone, em25106
Izveidot programmu gan C++, gan Python. 
Ievadot loģiski nepareizus datus, programmai jāizdod atbilstošs paziņojums. 

A2. Doti naturāli skaitļi m un n. 
Noskaidrot starpību starp m un n dažādo reizinātāju skaitu 

Programmas gala versija izstrādāta: 25.09.2025
---------------------------------------------------------------

                Testa plāns

        Ievade:      Paredzamais rezultāts:

        3   1           2 - 1 = 1
        9   6           3 - 4 = -1
        a   45          Ievadiet pirmo skaitli ka naturalu skaitli! (>0)
        34  -2          Ievadiet otro skaitli ka naturali skaitli! (>0)

---------------------------------------------------------------
'''

def dalisana(dalamais_skaitlis):

    dalitaju_skaits = 0
    
    for visi_skaitli in range(1, dalamais_skaitlis+1):  #funkcija laiz cauri ciparus no 1 līdz dotajam ciparam
        if dalamais_skaitlis % visi_skaitli == 0: #pārbauda vai dalās bez atlikuma
            dalitaju_skaits += 1 #ja dalās bez atlikuma, pievieno mainīgajam +1 vērtību
    return dalitaju_skaits

#parbaudam vai ir naturals skaitlis un vai nav ievaditi kaut kadi simboli/decimaldalas


while True: #lai programmu varētu izspēlēt vairākas reizes

    #1. cipars
    while True:
        try:
            pirmais_cipars = int(input("Ievadiet pirmo naturālo skaitli: "))
            if pirmais_cipars > 0:
                break
            else:
                print("Ievadiet naturālu skaitli! (>0)\n" + 50 * "-" + "\n")
        except ValueError:
            print("Ievadiet naturālu skaitli! (>0)\n" + 50 * "-" + "\n")
        
    #2.cipars
    while True:
        try:
            otrais_cipars = int(input("Ievadiet otro naturālo skaitli: "))
            if otrais_cipars > 0:
                break
            else:
                print("Ievadiet naturālu skaitli! (>0)\n" + 50 * "-" + "\n")
        except ValueError:
            print("Ievadiet naturālu skaitli! (>0)\n" + 50 * "-" + "\n")
        


    #izpilda dalisanu
    pirmais_dalijuma_skaits = dalisana(pirmais_cipars)
    otrais_dalijuma_skaits = dalisana(otrais_cipars)

    print("-" * 100)
    print()

    rezultats = pirmais_dalijuma_skaits - otrais_dalijuma_skaits

    #rezultats
    print(f"Abu naturālo skaitļu reizinātāju starpība: {pirmais_dalijuma_skaits} - {otrais_dalijuma_skaits} = {rezultats}\n")

    #ja ievada 1, programma vēlreiz izipildīsies, jebkas cits, beidzas.
    turpinat = int(input("Vēlaties vēlreiz pamēģināt? (1/0): "))
    print("-" * 100)
    print()

    if turpinat != 1:
        break


    
