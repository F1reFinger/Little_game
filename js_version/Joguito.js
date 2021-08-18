function getRandomInt(min, max) {
    min = Math.ceil(min);
    max = Math.floor(max);
    return Math.floor(Math.random() * (max - min)) + min;
}
var pontos = 0,
    a;
var verificador;

while (verificador !== 'F') {
    console.log("o proximo numero ira ser maior que 50?");
    console.log("S para Sim e N para Não.");
    verificador = prompt("");
    a = getRandomInt(0, 100);
    if (verificador === 'S' && a > 50) {
        console.log("ACERTOU!");
        pontos++;
    } else if (verificador === 'S' && a < 50) {
        console.log("ERROOUU!!");
    }
    if (verificador === 'N' && a > 50) {
        console.log("ERROOUU!!");
    } else if (verificador === 'N' && a < 50) {
        console.log("ACERTOU!");
        pontos++;
    }
    console.log(a);
}
console.log("pontos", pontos);