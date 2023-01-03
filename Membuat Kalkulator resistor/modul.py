def toleransi(nilai, toler):
    persen = 0
    if (toler == 5):
        persen = 5/100
    elif (toler == 10):
        persen = 10/100
    else:
        print('masukkan 5 atau 10')
    hasil = persen*nilai
    return hasil
