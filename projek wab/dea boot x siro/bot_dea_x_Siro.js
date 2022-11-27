const pertannyaan = document.getElementById("pertannyaan")
const jawab = document.getElementById("jawaban")

let init = 0

const botsey = (data) => {
    return [
        "halo....., ee.. perkenalkan aku dea bot. siapa nama mu..? ",
        `halo ${data.nama}, berapa usia kamu..? :)`,
        `ohh..! ${data.usia}, kamu hobinya apa...?`,
        `wow.. sama dong aku juga hobi ${data.hobi}..! btw, punya pcr gak... :)`,
        `ohh ${data.pacar}, ya udah kolo gitu....! udahan ya :)`
    ]
}
pertannyaan.innerHTML = botsey()[0]

function botStart() {
    init++
    if (init === 1) {
        botDelay({
            nama: jawab.value
        })
    } else if (init === 2) {
        botDelay({
            usia: jawab.value
        })
    } else if (init === 3) {
        botDelay({
            hobi: jawab.value
        })
    } else if (init === 4) {
        botDelay({
            pacar: jawab.value
        })
    } else if (init === 5) {
        finising()
    } else {
        botEnd()
    }
}

function botDelay(jawabanUser) {
    setTimeout(() => {
        pertannyaan.innerHTML = botsey(jawabanUser)[init]
    }, [1500])
}

function finising() {
    pertannyaan.innerHTML = `terimakasih udah main ke dea x siro bot... :)`
}

function botEnd() {
    window.location.reload()
}