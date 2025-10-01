n = int(input("Ievadi naturālu skaitli n: "))

for i in range(1, n + 1): #jo vajag lai beidzas ar to pasu ciparu ieskaitot
    if i <= n // 2 + 1: #no n atrod viduspunktu dotajam ciparam
        zvaigznes = i #tad kad tas ir sasniedzis augsu tas dilst
    else:
        zvaigznes = n - i + 1

    print("*" * zvaigznes)
