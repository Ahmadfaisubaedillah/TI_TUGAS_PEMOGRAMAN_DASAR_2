n = int(input("Masukkan jumlah data: "))

total = 0

for i in range(n):
    angka = float(input(f"Masukkan nilai ke-{i+1}: "))
    total += angka

rata_rata = total / n

print("Rata-rata =", rata_rata)