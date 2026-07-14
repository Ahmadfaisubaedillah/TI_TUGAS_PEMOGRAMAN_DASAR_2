├── soal3_text_analyzer/
│   │   ├── main.py
│   │   ├── analyzer.py
│   │   ├── utils.py
│   │   ├── input.txt                 ← file teks input
│   │   └── report.txt                ← output laporan

### 📌 Soal 3 — Analisis Teks Otomatis (Python)
**Konsep:** file I/O, string, dictionary, Counter, grafik ASCII

Program membaca file `input.txt` dan menghasilkan laporan statistik lengkap:
- Jumlah baris dan kata
- Jumlah huruf vokal dan konsonan
- 5 kata yang paling sering muncul
- Grafik frekuensi kata dalam format ASCII

Hasil laporan disimpan ke `report.txt`.

---

### ▶️ Soal 3 — Analisis Teks Otomatis (Python)

```bash
# 1. Masuk ke folder
cd Python/soal3_text_analyzer

# 2. Jalankan
python main.py
```

**Contoh output:**
```
=== LAPORAN ANALISIS ===

Jumlah Baris : 5
Jumlah Kata : 11
Huruf Vokal : 29
Huruf Konsonan : 51

--- Top 5 Kata ---
python          ### (3)
adalah          # (1)
bahasa          # (1)
pemrograman.    # (1)
mudah           # (1)
