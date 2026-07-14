def konversi_suhu():
    print("pilih menu")

    pilihan = int(input("Pilih menu (1-4): "))
    suhu = float(input("Masukkan nilai suhu: "))

    if pilihan == 1:
        hasil = (suhu * 9/5) + 32
        print(f"Hasil: {hasil} °F")
    elif pilihan == 2:
        hasil = suhu + 273.15
        print(f"Hasil: {hasil} K")
    elif pilihan == 3:
        hasil = (suhu - 32) * 5/9
        print(f"Hasil: {hasil} °C")
    elif pilihan == 4:
        hasil = suhu - 273.15
        print(f"Hasil: {hasil} °C")
    else:
        print("Pilihan tidak valid")
konversi_suhu()
