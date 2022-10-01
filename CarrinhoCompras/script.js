/* Fazer o calculo da compra do chocolate */

function comprar() {
    const valor = 713;
    let quantidade = document.getElementById("quantidade").value
    let subtotal = (valor * quantidade);

    let total = document.getElementById("total2");
    total.innerHTML = (`R$ ${subtotal},00`);
}

/* 
function comprar() {
    const valorP = 713;
    const valorM = 1031;
    const valorG = 1573;

    let quantidade = document.getElementById("quantidade").value
    let subtotal = (valor * quantidade);
 
    var select = document.getElementById("tamanho").value
        select.addEventListener("change", function comprar (){
        console.log(select.value)
        if (select == "P") {
            subtotal = (valorP * quantidade)
            let total = document.getElementById("total2");
            total.innerHTML = (`R$ ${subtotal},00`);
        } else if (select == "M") {
            subtotal = (valorM * quantidade)
            let total = document.getElementById("total2");
            total.innerHTML = (`R$ ${subtotal},00`);
        } else if (select == "G") {
            subtotal = (valorG * quantidade)
            let total = document.getElementById("total2");
            total.innerHTML = (`R$ ${subtotal},00`);
        }
    })
} */