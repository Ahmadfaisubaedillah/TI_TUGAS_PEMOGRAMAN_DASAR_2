"""
Program ini membaca daftar operasi matematika dari ops.txt,
menghitung hasilnya, lalu menyimpan setiap hasil ke results.txt.

Format setiap baris pada ops.txt: angka operator angka
Contoh: 3 + 4
"""


def hitung(a, operator, b):
    if operator == "+":
        return a + b
    elif operator == "-":
        return a - b
    elif operator == "*":
        return a * b
    elif operator == "/":
        if b == 0:
            return None
        return a / b
    else:
        return "ERROR_OPERATOR"


def proses_file(file_input="ops.txt", file_output="results.txt"):
    hasil_akhir = []

    with open(file_input, "r") as f:
        baris_list = f.readlines()

    for nomor, baris in enumerate(baris_list, start=1):
        baris = baris.strip()

        if baris == "":
            continue

        bagian = baris.split()

        if len(bagian) != 3:
            hasil_akhir.append(f"{baris} => Format tidak valid")
            continue

        try:
            a = float(bagian[0])
            operator = bagian[1]
            b = float(bagian[2])
        except ValueError:
            hasil_akhir.append(f"{baris} => Angka tidak valid")
            continue

        hasil = hitung(a, operator, b)

        if hasil is None:
            hasil_akhir.append(f"{baris} => Error: pembagian dengan nol")
        elif hasil == "ERROR_OPERATOR":
            hasil_akhir.append(f"{baris} => Error: operator '{operator}' tidak dikenali")
        else:
            hasil_akhir.append(f"{baris} = {hasil}")

    with open(file_output, "w") as f:
        for baris in hasil_akhir:
            f.write(baris + "\n")

    print(f"Selesai. {len(hasil_akhir)} operasi diproses.")
    print(f"Hasil disimpan di {file_output}")


if __name__ == "__main__":
    proses_file()
