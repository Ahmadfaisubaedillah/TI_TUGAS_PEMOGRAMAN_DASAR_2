 Python/
│   ├── soal2_game_guess/
│   │   ├── main.py
│   │   ├── game.py
│   │   ├── scoreboard.py
│   │   └── scores.json               ← output skor pemain

### 📌 Soal 2 — Game Guess Battle (Python)
**Konsep:** loop, conditional, modularisasi, JSON, colorama

Game tebak angka berbasis CLI dengan 3 level kesulitan:

| Level | Rentang | Percobaan |
|-------|---------|-----------|
| 1 | 1 – 10 | 3x |
| 2 | 1 – 50 | 5x |
| 3 | 1 – 100 | 7x |

Skor dihitung dari sisa percobaan × 10 + level × 20. Hasil skor disimpan ke `scores.json` dan menampilkan TOP 5 pemain terbaik. Menggunakan **colorama** untuk efek warna terminal.

---

### ▶️ Soal 2 — Game Guess Battle (Python)

```bash
# 1. Masuk ke folder
cd Python/soal2_game_guess

# 2. Jalankan
python main.py
```

**Alur permainan:**
```
=== GAME GUESS BATTLE ===                                                                  
Masukkan nama: fais

Pilih level
1. Easy
2. Medium
3. Hard
Level: 1

Tebak angka 1 - 10
Masukkan tebakan: 5
Terlalu kecil!
Masukkan tebakan: 6
Terlalu kecil!
Masukkan tebakan: 8
Terlalu besar!
Game Over! Jawaban: 7

Score akhir: 0

=== TOP 5 SCORE ===
fais - 80
fais - 40
fais  - 0
fais - 0

---
