//Emils E. Magone, task 2, em25106

const lv = ["cau", "kakis", "suns", "es", "esmu"];
const en = ["hey", "cat", "dog", "i", "am"];

function tulkoVardu(vards, mainit = "lvuzen") {

    let a = vards.toLowerCase();
    let no;
    let uz;

    if (mainit === "lvuzen") { //advanced, atskiriba no virziena nomaina uz kadu valodu tulkos
        no = lv;
        uz = en;
    } else { // "enuzlv"
        no = en;
        uz = lv;
    };

    let i = no.indexOf(a); //mekle vai vardnica ir tads vards

    if (i === -1) return `?${vards}?`;
    return uz[i]; //ja atrasts vards vardnica, tad tulkojam
}

console.log(tulkoVardu("cau"));    
console.log(tulkoVardu("CAU"));    
console.log(tulkoVardu("suns"));  
console.log(tulkoVardu("kakis"));  
console.log(tulkoVardu("koks")); 


//turpinajums

function tulkoTekst(teksts, mainit = "lvuzen") {

    let vardi = teksts.split(" "); //sadalam tekstu pa vardiem
    let rez = [];

    for (let i of vardi){
        let simbols = ""; //saglabas pieturzimes

        if (i.endsWith(".") || i.endsWith(",") || i.endsWith("!") || i.endsWith("?")) {
            simbols = i.slice(-1); //pedejais simbols
            i = i.slice(0, -1); //vards bez pedeja simb
        }

        let tulkots = tulkoVardu(i, mainit); //tulkojam katru vardu

        rez.push(tulkots + simbols); //pieturzime atpakal
    }

    return rez.join(" "); //kopa atpakal
}

console.log(tulkoTekst("Cau es esmu kakis.", "lvuzen"));
console.log(tulkoTekst("Kakis, suns un koks!", "lvuzen"));
console.log(tulkoTekst("hey i am cat.", "enuzlv"));
