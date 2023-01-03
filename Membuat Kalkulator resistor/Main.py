import modul

print('='*5, "TOLERANSI RESISTOR", '='*5)

while True:
    print('='*6, 'pilih program')
    print('1. menghitung toleransi')
    print('0. mentup program')

    pilih = int(input("masukan pilihan :"))

    if (pilih == 1):
        ohm = int(input('masukan nilai resistor: '))
        print('nilai resistor', ohm, 'Ohm')
        toler = int(input('masukan toleransi: '))
        hasiltoler = modul.toleransi(ohm, toler)
        print('nilai toleransi:', hasiltoler,)
        max = ohm + hasiltoler
        min = ohm - hasiltoler
        print('nilai maksimal:', max, 'ohm')
        print('nilai minimal:', min, 'ohm')

    elif (pilih == 0):
        print("="*15, '\nprogram berakhir terimakasih :)')
        break
