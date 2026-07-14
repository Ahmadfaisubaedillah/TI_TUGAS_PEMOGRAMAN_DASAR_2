C/
├── soal1_data_mahasiswa/
│   ├── main.c
│   │   ├── linked_list.c
│   │   ├── linked_list.h
│   │   └── data_mahasiswa.csv        ← output program
│   └── soal4_csv_json/
│       ├── convert_csv_json.c
│       └── data_mahasiswa.json       ← output konversi

## 📝 Penjelasan Singkat Tiap Program

- E → < 40### 📌 Soal 1 — Sistem Data Mahasiswa (C)
**Konsep:** struct, pointer, dynamic memory, linked list, file I/O

Program manajemen data mahasiswa menggunakan **linked list dinamis**. Setiap node menyimpan nama, NIM, nilai tugas, UTS, dan UAS. Program menghitung nilai akhir secara otomatis dengan rumus:

```
Nilai Akhir = (30% × Tugas) + (30% × UTS) + (40% × UAS)
```

Huruf mutu ditentukan berdasarkan nilai akhir:
- A → ≥ 85
- B → 70–84
- C → 55–69
- D → 40–54

Fitur: tambah, tampilkan, cari, hapus mahasiswa berdasarkan NIM, dan simpan ke CSV.

---

## 🚀 Instruksi Menjalankan Program

### ▶️ Soal 1 — Sistem Data Mahasiswa (C)

```bash
# 1. Masuk ke folder
cd C/soal1_data_mahasiswa

# 2. Compile
gcc main.c linked_list.c -o program

# 3. Jalankan
# Windows:
.\program.exe
# Linux/macOS:
./program
```

**Menu program:**
```
=== SISTEM DATA MAHASISWA ===
1. Tambah Mahasiswa
2. Tampilkan Semua
3. Cari Mahasiswa
4. Hapus Mahasiswa
5. Simpan ke CSV
0. Keluar
```

> Pilih **5** untuk menghasilkan file `data_mahasiswa.csv` sebelum menjalankan Soal 4.

---

## 📊 Contoh Output File

### `data_mahasiswa.csv` (Output Soal 1)
```
Nama,NIM,Tugas,UTS,UAS,NilaiAkhir,Mutu
jajang,1314,30.0,80.0,90.0,69.00,C
bahlil,1415,50.0,60.0,70.0,61.00,C
```

