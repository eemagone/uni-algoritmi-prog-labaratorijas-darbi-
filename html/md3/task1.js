//Emils E. Magone, task 1, em25106

function darbibas() {

    let mas = [];

    return function(darbiba) {
        mas.push(darbiba);
        return mas; //closure
    }
}

const a = darbibas();

console.log(a("Pamāj ar roku"));
console.log(a("Pamāj ar roku pretī"));
console.log(a("Aizbēg.."));
console.log(a("Stāv apjucis"));