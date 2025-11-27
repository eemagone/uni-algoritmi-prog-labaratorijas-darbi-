/*
AuPLa1301. Izveidot C++ klasi darray, izmantojot objektorientētās programmēšanas līdzekļus un strukturējot programmu vismaz trīs failos.
Klases hederi obligāti novietot atsevišķā hedera failā (darray.h). Visas metodes realizēt ārpus hedera faila – speciālā C++ failā (darray.cpp).
Funkcija main ievietojama vēl citā C++ failā (main.cpp).
Klases dati pēc noklusēšanas ir slēpti (private), bet metodes atklātas (public).
Klase darray attēlo dinamisku veselu skaitļu masīvu ar n elementiem.
Izveidot klasi darray pārbaudošu programmu, kurā tiek izveidoti divi klases objekti – automātiskā (tiešā) veidā un dinamiski un objektiem tiek pielietotas metodes.
*/

class darray {
    private:
        int* a;
        int n;
        void fill_array();


    public:
        darray(int size); ///Izveido jaunu masīvu ar dotu lielumu
        darray(const darray& b); ///Izveido kopiju no cita darray objekta
        ~darray(); /// Paziņo par masīva likvidēšanu


    double array_avg() const;
    void print_array() const;
};
